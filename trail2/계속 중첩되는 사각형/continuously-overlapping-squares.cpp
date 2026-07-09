#include <iostream>
#include <algorithm>

#define OFFSET 100

using namespace std;

int main() {
    int N(0);
    cin >> N;

    bool bArray[OFFSET*2+1][OFFSET*2+1]{false};

    int x1, y1, x2, y2;
    for (int i = 0; i < N; ++i){
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET; y1 += OFFSET;
        x2 += OFFSET; y2 += OFFSET;
        for (int y = y1; y < y2; ++y) {
            for (int x = x1; x < x2; ++x) {
                bArray[y][x] = (i%2 == 0 ? false : true);
            }
        }
    }

    int area(0);
    for (int y = 0; y < OFFSET*2 + 1; ++y){
        for (int x = 0; x < OFFSET*2 +1; ++x) {
            if (bArray[y][x]) ++area;
        }
    }
    cout << area;
    return 0;
}