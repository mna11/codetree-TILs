#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

int TaxiDistance(int x1, int y1, int x2, int y2)
{
    return pow(x1 - x2, 2) + pow(y1 - y2, 2);
}

int n;
int x[100], y[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.
    int iMin(INT_MAX);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j) continue;
            iMin = min(iMin,TaxiDistance(x[i], y[i], x[j], y[j]));
        }
    }
    cout << iMin;

    return 0;
}