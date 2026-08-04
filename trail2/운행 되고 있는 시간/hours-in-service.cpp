#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<pair<int, int>> vec;
    for (int i = 0; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        vec.push_back(make_pair(a, b));
    }

    int iMax(INT_MIN);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < N; ++i)
    {
        int iTime(0);
        int iMaxTime(INT_MIN), iMinTime(INT_MAX);
        int iLastEnd(0); 
        for (int j = 0; j < N; ++j)
        {
            if (j == i) continue;
            pair<int, int> p = vec[j];
            if (iLastEnd >= p.first) iTime += p.second - iLastEnd;
            else iTime += p.second - p.first;
            iLastEnd = p.second;
        }
        iMax = max(iMax, iTime);
    }
    cout << iMax;
    return 0;
}