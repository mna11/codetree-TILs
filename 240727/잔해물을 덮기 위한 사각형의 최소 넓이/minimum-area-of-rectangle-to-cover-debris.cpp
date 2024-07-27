#include <iostream>
#include <algorithm>

#define OFFSET 1000

using namespace std;

int cord[2001][2001] = {{0,},};

void Area(int x1, int y1, int x2, int y2, int input){
    for (int i = x1; i < x2; i++){
        for (int j = y1; j < y2; j++){
            cord[i][j] = input;
        }
    }
}

int main() {
    int x1, y1, x2, y2;
    int max_raw(-1), min_raw(2001);
    int max_col(-1), min_col(2001);
    int area;

    for (int i = 1; i >= 0; i--){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;
        Area(x1, y1, x2, y2, i);
    }

    for (int i = 0; i < 2001; i++){
        for (int j = 0; j < 2001; j++){
            if (cord[i][j] == 1){
                max_raw = max(max_raw, i);
                min_raw = min(min_raw, i);
                max_col = max(max_col, j);
                min_col = min(min_col, j);
            }
        }
    }
    area = (max_raw - min_raw + 1) * (max_col - min_col + 1);
    cout << area;

    return 0;
}