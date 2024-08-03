#include <iostream>
#include <vector>
#include <tuple>

#define NONE 0
#define BLACK 1
#define WHITE 2

using namespace std;

vector<vector<int>> board;

bool InRange(int x, int y){
    return (x >= 0 && x < 19 && y >=0 && y < 19);
}

bool IsXLineOmok(int x, int y){ // 세로 5개
    int color = board[x][y];

    if (color == NONE) return false;
    if (!InRange(x + 4, y)) return false;
    for (int i = x + 1; i < x + 5; i++) {
        if (color != board[i][y]) return false;
    }

    return true;
}

bool IsYLineOmok(int x, int y){ // 가로 5개
    int color = board[x][y];
    
    if (color == NONE) return false;
    if (!InRange(x, y + 4)) return false;
    for (int i = y + 1; i < y + 5; i++) {
        if (color != board[x][i]) return false;
    }

    return true;
}

bool IsXYLineRightDownOmok(int x, int y){ // 대각선 5개 - 오른쪽 아래로
    int color = board[x][y];
    
    if (color == NONE) return false;
    if (!InRange(x + 4, y + 4)) return false;
    for (int i = 1; i < 5; i++) {
        if (color != board[x + i][y + i]) return false;
    }

    return true;
}

bool IsXYLineLeftDownOmok(int x, int y){ // 대각선 5개 - 왼쪽 아래로
    int color = board[x][y];
    
    if (color == NONE) return false;
    if (!InRange(x + 4, y - 4)) return false;
    for (int i = 1; i < 5; i++) {
        if (color != board[x + i][y - i]) return false;
    }

    return true;
}

int main() {
    int color(NONE), x(-1), y(-1);

    //init
    for (int i = 0; i < 19; i++){
        vector<int> tmp;
        for (int j = 0; j < 19; j++){
            cin >> x;
            tmp.push_back(x);
        }
        board.push_back(tmp);
    }

    //solve
    for (int i = 0; i < 19; i++){
        for (int j = 0; j < 19; j++){
            if (IsXLineOmok(i, j)) {
                color = board[i][j];
                x = i + 2;
                y = j;
            }
            else if (IsYLineOmok(i, j)){
                color = board[i][j];
                x = i;
                y = j + 2;
            }
            else if (IsXYLineRightDownOmok(i, j)){
                color = board[i][j];
                x = i + 2;
                y = j + 2;
            }
            else if (IsXYLineLeftDownOmok(i, j)){
                color = board[i][j];
                x = i + 2;
                y = j - 2;
            }
        }
    }
    x++; y++;

    cout << color << endl;
    if (color != NONE) cout << x << " " << y;
    return 0;
}