#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int T, a, b;
char c[100];
int x[100];

int main() {
    cin >> T >> a >> b;

    for (int i = 0; i < T; i++) {
        cin >> c[i] >> x[i];
    }

    // Please write your code here.
    int iResult(0);
    for (int i = a; i <= b; ++i)
    {
        int iDistN(INT_MAX);
        int iDistS(INT_MAX);
        for (int j = 0; j < T; ++j)
        {
            if (c[j] == 'N')
            {
                iDistN = min(iDistN, abs(x[j] - i));
            }
            else 
            {
                iDistS = min(iDistS, abs(x[j] - i));
            }
        }
        if (iDistN >= iDistS) ++iResult;
    }
    cout << iResult;

    return 0;
}