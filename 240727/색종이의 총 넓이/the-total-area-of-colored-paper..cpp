#include <iostream>

#define OFFSET 100

using namespace std;

void Area(int cord[][201], int x, int y){
    for (int i = x; i < x +8; i++){
        for (int j = y; j < y + 8; j++){
            cord[i][j] = 1;
        }
    }
}

int main() {
    int n;
    int cord[201][201] = {{0,},};
    int area(0);

    cin >> n;
    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        x += OFFSET;
        y += OFFSET;

        Area(cord, x, y);
    }

    for (int i = 0; i < 201; i++){
        for (int j = 0; j < 201; j++){
            if (cord[i][j] == 1) area++;
        }
    }

    cout << area;
    return 0;
}