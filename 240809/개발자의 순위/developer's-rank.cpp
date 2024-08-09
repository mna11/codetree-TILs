#include <iostream>
#include <vector>

#define MAX_N 20
using namespace std;

int K(0), N(0), cnt(0);
vector<vector<int>> rank_p;
bool a_better_b[MAX_N + 1][MAX_N + 1] = {};

int main() {
    
    //init
    cin >> K >> N;
    for (int i = 0; i < K; i++){
        vector<int> tmp;
        for (int j = 0; j < N; j++){
            int p;
            cin >> p;
            tmp.push_back(p);
        }
        rank_p.push_back(tmp);
    }

    //solve
    for (int i = 0; i < K; i++){
        for (int j = 0; j < N - 1; j++){
            for (int k = j + 1; k < N; k++){
                a_better_b[rank_p[i][j]][rank_p[i][k]] = true;
            }
        }
    }
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            if (i == j) continue;
            if (a_better_b[i][j] && a_better_b[j][i]) continue;

            if (a_better_b[i][j]) cnt++;
        }
    }

    cout << cnt;
    return 0;
}