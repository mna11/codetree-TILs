#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int cx[100], cy[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cx[i] >> cy[i];
    }

    // Please write your code here.
    int iMaxX = *max_element(cx, cx + n);
    int iMaxY = *max_element(cy, cy + n);

    int iMin(INT_MAX);
    for (int x = 0; x < iMaxX; x+=2)
    {
        for (int y = 0; y < iMaxY; y+=2)
        {
            int a1(0), a2(0), a3(0), a4(0);
            for (int i = 0; i < n; ++i){
                // area 1
                if (cx[i] > x && cy[i] > y)
                    ++a1;

                // area 2
                if (cx[i] > x && cy[i] < y)
                    ++a2;

                // area 3
                if (cx[i] < x && cy[i] < y)
                    ++a3;

                // area 4
                if (cx[i] < x && cy[i] > y)
                    ++a4; 
            }
            iMin = min(iMin, max({a1, a2, a3, a4}));
        }
    }
    cout << iMin;
    return 0;
}