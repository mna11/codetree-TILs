#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <climits>

using namespace std;

int main() {
    int N(0), B(0);
    cin >> N >> B;
    vector<pair<int, int>> vecPair(N);
    for (int i = 0; i < N; ++i)
        cin >> vecPair[i].first >> vecPair[i].second;

    int iMax(INT_MIN);
    for (int i = 0; i < N; ++i)
    {
        vector<pair<int, int>> vecTmp(vecPair);
        vecTmp[i].first /= 2;
        sort(vecTmp.begin(), vecTmp.end(), [](auto p1, auto p2)
        {
            if (p1.first + p1.second < p2.first + p2.second) return true;
            else if (p1.first + p1.second == p2.first + p2.second) return p1.first > p2.first;
            else return false;
        });
        int iTmpBudget(B);
        int iCnt(0);
        for (int j = 0; j < N; ++j)
        {
            iTmpBudget -= vecTmp[j].first + vecTmp[j].second;
            if (iTmpBudget < 0) {
                iCnt = j;
                break;
            }
        }
        iMax = max(iMax, iCnt);
    }
    cout << iMax;
    return 0;
}