#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vecInt(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> vecInt[i];
    }
    int iMaxC = *max_element(vecInt.begin(), vecInt.end());
    int iResult(INT_MIN);

    for (int i = 0; i < iMaxC; ++i)
    {
        int iCnt(0);
        bool bUp(false);
        for (int v : vecInt)
        {
            if (bUp && v <= i)
            {
                iCnt++;
                bUp = false;
            }
            else if (v > i)
            {
                bUp = true;
            }
        }
        if (bUp) iCnt++;
        iResult = max(iResult, iCnt);
    }
    cout << iResult;
    return 0;
}