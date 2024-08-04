#include <iostream>
#include <vector>

using namespace std;

int n, m, cnt;
vector<vector<char>> board;
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

bool InRange(int x, int y){
    return(x >= 0 && x < n && y >=0 && y < m);
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        vector<char> tmp;
        for (int j = 0; j < m; j++){
            char c;
            cin >> c;
            tmp.push_back(c);
        }
        board.push_back(tmp);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            for (int k = 0; k < 8; k++){
                if (board[i][j] != 'L') break;

                int nx = i + dx[k] * 2;
                int ny = j + dy[k] * 2;
                if (!InRange(nx, ny)) continue;
                if (board[nx - dx[k]][ny - dy[k]] == 'E' &&
                    board[nx][ny] == 'E') cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}