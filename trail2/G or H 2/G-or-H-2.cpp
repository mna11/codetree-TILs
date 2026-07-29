#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int pos[100];
char alpha[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[i];
    }

    // Please write your code here.
    vector<char> v(101, 0);
    for (int i = 0; i < N; ++i)
    {
        v[pos[i]] = alpha[i];
    }

    int iMax(INT_MIN);
    for (int i = 0; i <= 100; ++i)
    {
        int iHCnt(0), iGCnt(0);
        if (v[i] != 'G' && v[i] != 'H') continue;
        for (int j = i; j <= 100; ++j)
        {
            if (v[j] == 'G') iGCnt++;
            else if (v[j] == 'H') iHCnt++;
            else continue;

            if (iHCnt == iGCnt
                || iHCnt == 0
                || iGCnt == 0)
            {
                iMax = max(iMax, j - i);
            }
        }
    }
    cout << iMax;

    return 0;
}