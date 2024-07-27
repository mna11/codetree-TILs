#include <iostream>

#define OFFSET 100

using namespace std;

void Area(int cord[][201], int x1, int y1, int x2, int y2){
    for (int i = x1; i < x2; i++){
        for (int j = y1; j < y2; j++){
            cord[i][j]++;
        }
    }
}


int main() {
    int n, x1, x2, y1, y2;
    int cord[201][201] = {0, };
    int area(0);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;
        Area(cord, x1, y1, x2, y2);
    }
    for (int i = 0; i < 201; i++){
        for (int j = 0; j < 201; j++){
            if (cord[i][j] > 0) area++;
        }
    }
    cout << area;
    return 0;
}