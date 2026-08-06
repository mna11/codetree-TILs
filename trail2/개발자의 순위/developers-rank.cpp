#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
    int K(0), N(0);
    cin >> K >> N;
    vector<vector<int>> vecTmp(K);
    for (int i = 0; i < K; ++i)
    {
        vecTmp[i].resize(N);
        for (int j = 0; j < N; ++j)
            cin >> vecTmp[i][j];
    }

    vector<bool> bResult;
    int iResult(0);
    for (int i = 0; i < N; ++i)
    {
        bResult.clear();
        bResult.resize(N, true);
        bResult.shrink_to_fit();
        for (int j = 0; j < K; ++j)
        {
            bool bFind(false);
            for (int k = 0; k < N; ++k)
            {
                if (i == (vecTmp[j][k] - 1)) bFind = true;
                
                if(!bFind) bResult[vecTmp[j][k] - 1] = false;

            }
        }
        iResult += count(bResult.begin(), bResult.end(), true) - 1;
    }
    cout << iResult;

    return 0;
}