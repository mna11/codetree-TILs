#include <iostream>
#include <utility>
#include <climits>

using namespace std;

int N;
int x[100], y[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    // Please write your code here.

    int iMin(INT_MAX);
    for (int i = 0; i < N; ++i) // 뺼 점 선택
    {
        int iArea(0);
        pair<int, int> LT = make_pair(INT_MAX, INT_MIN);
        pair<int, int> RB = make_pair(INT_MIN, INT_MAX);
        for (int j = 0; j < N; ++j)
        {
            if (j == i) continue;
            
            LT.first = min(LT.first, x[j]);
            LT.second = max(LT.second, y[j]);

            RB.first = max(RB.first, x[j]);
            RB.second = min(RB.second, y[j]);
        }
        iArea = (RB.first - LT.first) * (LT.second - RB.second);
        iMin = min(iMin, iArea); 
    }
    cout << iMin;
    return 0;
}