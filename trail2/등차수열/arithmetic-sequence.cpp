#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vecInt(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> vecInt[i];
    }
    int iMaxCnt(INT_MIN); 
    int iMaxK = *max_element(vecInt.begin(), vecInt.end());

    for (int k = 1; k <= iMaxK; ++k)
    {
        int iCnt(0); 
        for (int i = 0; i < N; ++i)
        {
            for (int j = i + 1; j < N; ++j)
            {
                if (k - vecInt[i] == vecInt[j] - k)
                {
                    iCnt++;
                }
            }
        }
        iMaxCnt = max(iMaxCnt, iCnt);
    }
    cout << iMaxCnt;
    return 0;
}