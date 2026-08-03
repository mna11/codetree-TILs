#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<pair<int, int>> vec(N); 
    for (int i = 0; i < N; ++i) cin >> vec[i].first >> vec[i].second;

    int iMax(INT_MIN);
    for (int a = 0; a < N; ++a)
    {
        for (int b = 0; b < N; ++b)
        {
            for (int c = 0; c < N; ++c)
            {
                if (a == b || b == c || c == a) continue;
                int iWidth(0), iHeight(0);
                // a가 사잇각 점
                if ((vec[a].first == vec[b].first || vec[a].first == vec[c].first)
                && (vec[a].second == vec[b].second || vec[a].second == vec[c].second))
                {
                    iWidth = max(abs(vec[a].second - vec[b].second), abs(vec[a].second - vec[c].second));
                    iHeight = max(abs(vec[a].first - vec[b].first), abs(vec[a].first - vec[c].first));
                }
                // b가 사잇각 점
                else if ((vec[b].first == vec[a].first || vec[b].first == vec[c].first)
                && (vec[b].second == vec[a].second || vec[b].second == vec[c].second))
                {
                    iWidth = max(abs(vec[b].second - vec[a].second), abs(vec[b].second - vec[c].second));
                    iHeight = max(abs(vec[b].first - vec[a].first), abs(vec[b].first - vec[c].first));
                }
                // c가 사잇각 점
                else if ((vec[c].first == vec[b].first || vec[c].first == vec[a].first)
                && (vec[c].second == vec[b].second || vec[c].second == vec[a].second))
                {
                    iWidth = max(abs(vec[c].second - vec[b].second), abs(vec[c].second - vec[a].second));
                    iHeight = max(abs(vec[c].first - vec[b].first), abs(vec[c].first - vec[a].first));
                }
                else continue;
                iMax = max(iMax, iWidth * iHeight);
            }
        }
    }
    if (iMax == INT_MIN) cout << 0 << endl;
    else cout << iMax;
    return 0;
}