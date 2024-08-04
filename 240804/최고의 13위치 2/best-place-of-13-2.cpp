#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, max_coin(INT_MIN), coin;
vector<vector<int>> board;

int main() {

    //init
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        for (int j = 0; j < n; j++){
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        board.push_back(tmp);
    }

    for (int r1 = 0; r1 < n; r1++){
        for (int c1 = 0; c1 < n - 2; c1++){
            coin = board[r1][c1] + board[r1][c1 + 1] + board[r1][c1 + 2];

            for (int r2 = r1; r2 < n; r2++){
                for (int c2 = 0; c2 < n - 2; c2++){
                    if (r2 >= r1 && c2 >= c1 && c2 < c2 + 3) continue;
                    if (r2 == r1 && c2 < c1) continue;

                    coin += board[r2][c2] + board[r2][c2 + 1] + board[r2][c2 + 2];
                    max_coin = max(max_coin, coin);
                    coin = board[r1][c1] + board[r1][c1 + 1] + board[r1][c1 + 2];
                }
            }
        }
    }

    cout << max_coin;
    return 0;
}