#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int N, H, T;
    cin >> N >> H >> T;
    vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i)
        cin >> vec[i];

    int iMinCost(INT_MAX);
    for (int i = 0; i <= N - T; ++i)
    {  
        int iCost(0);
        for (int j = i; j < i + T; ++j)
        {
            iCost += abs(H - vec[j]);
        }
        iMinCost = min(iMinCost, iCost); 
    }
    cout << iMinCost;
    return 0;
}