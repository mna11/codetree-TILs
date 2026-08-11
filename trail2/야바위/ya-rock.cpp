#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<vector<int>> vecInt(N);
    for (int i = 0; i < N; ++i) {
        vecInt[i].resize(3);
        cin >> vecInt[i][0] >> vecInt[i][1] >> vecInt[i][2];
    }

    int iMaxScore(INT_MIN);
    for (int i = 0; i < 3; ++i)
    {
        int iScore(0);
        vector<bool> vecBool(3, false);
        vecBool[i] = true;
        for (int j = 0; j < N; ++j)
        {
            swap(vecBool[vecInt[j][0] - 1], vecBool[vecInt[j][1] - 1]);
            if (vecBool[vecInt[j][2] - 1] == true) ++iScore;
        }
        iMaxScore = max(iMaxScore, iScore);
    }
    cout << iMaxScore;
    return 0;
}