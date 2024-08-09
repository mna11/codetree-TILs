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

int eat_cheese[MAX_N + 1][MAX_M + 1] = {};
int rotten_cheese_check[MAX_M + 1] = {};
int sick_time[MAX_N + 1] = {};
bool sick_person[MAX_N + 1] = {};

int eat_number, eat_time, rotten_cheese, max_check(INT_MIN), medicine;

int main() {

    //init
    cin >> N >> M >> D >> S;
    for (int i = 0; i < D; i++){
        cin >> p >> m >> t;
        eat_cheese[p][m] = t; 
    }
    for (int i = 0; i < S; i++){
        cin >> p >> t;
        sick_time[p] = t;
    }

    //solve
    for (int i = 1; i <= N; i++){
        if (sick_time[i] == 0) continue;
        for (int j = 1; j <= M; j++){
            if (eat_cheese[i][j] == 0) continue;
            if (sick_time[i] > eat_cheese[i][j]) rotten_cheese_check[j]++;
        }
    }

    for (int i = 1; i <= M; i++){
        if (max_check < rotten_cheese_check[i]) {
            rotten_cheese = i;
            max_check = rotten_cheese_check[i];
        }
    }

    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= M; j++){
            if (eat_cheese[i][j] != 0 && j == rotten_cheese) medicine++;
        }
    }

    cout << medicine;

    return 0;
}