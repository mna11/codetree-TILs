#include <iostream>
#include <vector>

using namespace std;

int cnt(0), R, C;
vector<vector<char>> arr; 

void Func(int r, int c, char color, int count){
    if (count == 3 && r == R-1 && c == C-1){
        cnt++;
        return;
    }

    for (int i = r + 1; i < R; i++){
        for (int j = c + 1; j < C; j++){
            if (arr[i][j] != color) Func(i, j, arr[i][j], count+1);
        }
    }
}




int main() {\

    //init
    cin >> R >> C;
    for (int i = 0; i < R; i++){
        vector<char> tmp;
        for (int j = 0; j < C; j++){
            char color;
            cin >> color;
            tmp.push_back(color);
        }
        arr.push_back(tmp);
    }

    Func(0, 0, arr[0][0], 0);
    cout << cnt;
    return 0;
}