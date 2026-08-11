#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int iMax(INT_MIN);
    for (int i = 0; i <= C / A; ++i)
    {
        int iSum(0);
        for (int j = 0; j <= C / B; ++j)
        {
            iSum = A * i + B * j;
            if (iSum <= C)
                iMax = max(iMax, iSum);
        }
    }
    cout << iMax;
    return 0;
}