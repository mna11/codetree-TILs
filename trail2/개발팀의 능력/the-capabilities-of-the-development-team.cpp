#include <iostream>
#include <vector>
#include <numeric>
#include <climits> 
#include <algorithm>

using namespace std;

int main() {
    vector<int> vDev(5);
    for (int i = 0; i < 5; ++i) cin >> vDev[i];
    int iTotal = accumulate(vDev.begin(), vDev.end(), 0);

    int iMin(INT_MAX);
    for (int a = 0; a < 5; ++a)
    {
        for (int b = 0; b < 5; ++b)
        {
            for (int c = 0; c < 5; ++c)
            {
                if (a == b || b == c || c == a) continue;

                int A = vDev[a] + vDev[b];
                int B = vDev[c];
                int C = iTotal - (A + B);
                if (A == B || B == C || C == A) continue;
                int iDiff = max({A, B, C}) - min({A, B, C});
                iMin = min(iMin, iDiff);
            }
        }
    }
    if (iMin == INT_MAX) cout << -1 << endl;
    else cout << iMin << endl;
    return 0;
}