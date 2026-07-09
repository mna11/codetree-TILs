#include <iostream>
#include <algorithm>

#define OFFSET 1000

using namespace std;

int x1[2], y1[2];
int x2[2], y2[2];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    // Please write your code here.
    bool bArray[OFFSET*2 + 1][OFFSET*2 + 1]{ false };

    for (int i = 0; i < 2; ++i){
        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
        for (int y = y1[i]; y < y2[i]; ++y){
            for (int x = x1[i]; x < x2[i]; ++x){
                bArray[y][x] = (i == 0 ? true : false);
            }
        }
    }

    int max_x(0), min_x(OFFSET * 2 + 1), max_y(0), min_y(OFFSET * 2 + 1);
    for (int y = 0; y < OFFSET*2 + 1; ++y) {
        for (int x = 0; x < OFFSET*2 + 1; ++x) {
            if (bArray[y][x] == true) {
                max_x = max(max_x, x);
                min_x = min(min_x, x);
                max_y = max(max_y, y);
                min_y = min(min_y, y);
            }
        }
   }
   int area(0);
    if (!(min_x == OFFSET*2 + 1 || min_y == OFFSET*2 + 1))
        area = ((max_x + 1) - min_x) * ((max_y + 1) - min_y);
    cout << area;
    return 0;
}