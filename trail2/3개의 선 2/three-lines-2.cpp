#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <numeric>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<vector<int>> vecPair(N);
    for (int i = 0; i < N; ++i) {
        vecPair[i].resize(2);
        cin >> vecPair[i][0] >> vecPair[i][1];
    }
    bool bResult(false);
    for (int ix = 0; ix < 2; ++ix) 
    {
        for (int i = 0; i < 11; ++i)
        {
            for (int jx = 0; jx < 2; ++jx) 
            {
                for (int j = 0; j < 11; ++j)
                {
                    for (int kx = 0; kx < 2; ++kx) {
                        for (int k = 0; k < 11; ++k)
                        {
                            vector<int> vecInt(N, 0);
                            for (int l = 0; l < N; ++l)
                            {
                                if (vecPair[l][ix] == i
                                    || vecPair[l][jx] == j
                                    || vecPair[l][kx] == k)
                                {
                                    vecInt[l] = 1;
                                }
                            }
                            bResult = (bResult || accumulate(vecInt.begin(), vecInt.end(), 0) == N);
                        }
                    }
                }
            }

        }
    }
    cout << bResult;
    return 0;
}