#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vecOrigin(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> vecOrigin[i];
    }

    int iMin(INT_MAX); 
    for (int i = 0; i < N; ++i)
    {
        vector<int> vec2Origin(vecOrigin);
        vec2Origin[i] *= 2;

        for (int j = 0; j < N; ++j) // 제거 선택
        {
            vector<int> vecTmp(vec2Origin);
            vecTmp.erase(vecTmp.begin() + j);
            adjacent_difference(vecTmp.begin(), vecTmp.end(), vecTmp.begin(),
                [](int current, int previous)
                {
                    return abs(current - previous);
                });
            iMin = min(iMin, accumulate(vecTmp.begin() + 1, vecTmp.end(), 0));
        }
    }
    cout << iMin;
    return 0;
}