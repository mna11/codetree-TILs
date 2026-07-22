#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N(0);
    cin >> N; 
    vector<int> vec(N);
    for (int i = 0; i < N; ++i)
        cin >> vec[i];

    int iDistance(0), iMin(INT_MAX); 
    for (int i = 0; i < N; ++i) // 시작할 방 결정
    {
        iDistance = 0;
        for (int j = 0; j < N; ++j) // 이동
        {
            if (i == j) continue;
            else if (j > i) iDistance += (j - i) * vec[j];
            else iDistance += (N - (i - j)) * vec[j];
        }
        iMin = min(iMin, iDistance);
    }
    cout << iMin;
    return 0;
}