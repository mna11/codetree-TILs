#include <iostream>
#include <climits>
#include <algorithm>

#define MAX_N 50
#define MAX_M 50

using namespace std;

int N; // 사람의 수
int M; // 치즈의 수
int D; // 치즈를 먹은 기록의 수
int S; // 아픈 기록의 수

int p; // 몇번째 사람
int m; // 몇번째 치즈
int t; // 언제 먹었는지

int eat_cheese[MAX_N + 1][MAX_M + 1] = {}; // 1번째 인덱스: p, 2번째 인덱스: m, 값: t
int rotten_cheese[MAX_M + 1] = {}; // 인덱스: m, 값: 아픈 사람이 있을 때, 그 사람이 먹은 치즈에 ++
int sick_time[MAX_N + 1] = {}; // 인덱스: p, 값: p가 언제 아팠는지 기록

int max_check(INT_MIN); // 가장 가능성 높은 rotten_cheese를 판별하기 위한 도구
int medicine; // 필요한 약의 개수

int main() {

    //init
    cin >> N >> M >> D >> S;
    for (int i = 0; i < D; i++){
        cin >> p >> m >> t;
        if (eat_cheese[p][m] != 0) continue; // 같은 치즈를 여러번 먹을 경우, 가장 옛날에 먹었을 때를 유지하기 위해서
        eat_cheese[p][m] = t; 
    }
    for (int i = 0; i < S; i++){
        cin >> p >> t;
        sick_time[p] = t;
    }

    //solve
    //rotten_cheese의 값이 가장 큰 치즈가 상한 치즈일 확률이 매우 높다는 점을 이용하여 문제를 풀었다. 
    //상한치즈 후보들을 구하고(rotten_cheese[j] == max_check), 그걸 먹은 사람들만큼 약을 준비한다. 

    //rotten_cheese 값 세팅
    for (int i = 1; i <= N; i++){
        if (sick_time[i] == 0) continue;
        for (int j = 1; j <= M; j++){
            if (eat_cheese[i][j] == 0) continue;
            if (sick_time[i] > eat_cheese[i][j]) rotten_cheese[j]++;
        }
    }

    //max_check 값 세팅
    for (int i = 1; i <= M; i++){
        max_check = max(max_check, rotten_cheese[i]);
    }

    // (eat_cheese[i][j] != 0 && rotten_cheese[j] == max_check)
    // i번째 사람이 j번째 치즈를 먹었고, j번째 치즈는 상한치즈 후보일 경우 -> 약을 준비
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= M; j++){
            if (eat_cheese[i][j] != 0 && rotten_cheese[j] == max_check) {
                medicine++;
                break;
            }
        }
    }

    cout << medicine;

    return 0;
}