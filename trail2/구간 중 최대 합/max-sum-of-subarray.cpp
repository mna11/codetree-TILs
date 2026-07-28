#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N(0), K(0);
    cin >> N >> K;
    vector<int> vec(N);
    for (int i = 0; i < N; ++i)
        cin >> vec[i];

    int iMax(INT_MIN);
    for (int i = 0; i <= N - K; ++i)
    {
        int iSum(0);
        for (int j = i; j < i + K; ++j)
        {
            iSum += vec[j];
        }
        iMax = max(iMax, iSum);
    }

    cout << iMax;
    return 0;
}