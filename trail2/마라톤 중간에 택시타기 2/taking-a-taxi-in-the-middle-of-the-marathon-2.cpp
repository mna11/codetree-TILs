#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    // Please write your code here.
    int N(0);
    cin >> N;
    vector<pair<int, int>> cp;
    cp.resize(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> cp[i].first >> cp[i].second;
    }

    int cx(cp[0].first), cy(cp[0].second), iMin(INT_MAX), iTotal(0);
    for (int i = 1; i < N - 1; ++i)
    {
        iTotal = 0;
        cx = cp[0].first;
        cy = cp[0].second;
        for (int j = 0; j < N; ++j)
        {
            if (i == j) continue;iTotal += abs(cp[j].first - cx) + abs(cp[j].second - cy);
            cx = cp[j].first;
            cy = cp[j].second;
        }
        iMin = min(iMin, iTotal);
    }
    cout << iMin;
    return 0;
}