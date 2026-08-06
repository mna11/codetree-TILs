#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N(0), K(0);
    cin >> N >> K;
    vector<int> vecBoom(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> vecBoom[i];
    }

    int iMax(INT_MIN);
    for (int i = 0; i < N; ++i)
    {
        for (int j = i+1; j <= i + K; ++j)
        {
            if (vecBoom[i] == vecBoom[j])
            {
                iMax = max(iMax, vecBoom[i]);
            }
        }
    }

    cout << (iMax == INT_MIN ? -1 : iMax);
    return 0;
}