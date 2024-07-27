#include <iostream>

#define OFFSET 1000

using namespace std;

void Area(int cord[][2001], int x1, int y1, int x2, int y2, int input){
    for (int i = x1; i < x2; i++){
        for (int j = y1; j < y2; j++){
            cord[i][j] = input;
        }
    }
}


int main() {
    int cord[2001][2001] = {{0,},};
    int area(0);

    for (int i = 2; i >= 0; i--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;

        Area(cord, x1, y1, x2, y2, i);
    }
    for (int i = 0; i < 2001; i++){
        for (int j = 0; j < 2001; j++){
            if (cord[i][j] != 0) area++;
        }
    }
    cout << area;

    return 0;
}