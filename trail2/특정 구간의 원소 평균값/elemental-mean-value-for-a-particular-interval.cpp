#include <iostream>
#include <vector>
#include <climits>
#include <algorithm> 
#include <numeric>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vec(N, 0);
    for (int i = 0; i < N; ++i)
        cin >> vec[i];

    int cnt(0);
    for (int i = 0; i < N; ++i)
    {
        for (int j = i; j < N; ++j)
        {
            float fAver = accumulate(vec.begin() + i, vec.begin() + j + 1, 0.0) / ((j + 1) - i);
            for (int k = i; k <= j; ++k)
            {
                if (fAver == vec[k]) {
                    cnt++;
                    break;
                }
            }
        }
    }

    cout << cnt; 
    return 0;
}