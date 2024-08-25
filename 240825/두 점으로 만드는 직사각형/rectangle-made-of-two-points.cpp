#include <iostream>
#include <algorithm>
using namespace std;

int x[4], y[4];

int main() {
    for (int i = 0; i < 4; i++){
        cin >> x[i] >> y[i];
    }
    sort(x, x+4);
    sort(y, y+4);
    cout << (x[3] - x[0]) * (y[3] - y[0]);
    return 0;
}