#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

int main() {
    int N, C, G, H;
    cin >> N >> C >> G >> H;
    vector<pair<int, int>> vecPair;
    vecPair.reserve(N);
    int iMinA(INT_MAX), iMaxB(INT_MIN);
    for (int i = 0; i < N; ++i)
    {
        int a, b;
        cin >> a >> b;
        iMinA = min(iMinA, a);
        iMaxB = max(iMaxB, b);
        vecPair.emplace_back(a, b);
    }
    int iMaxWork(INT_MIN);
    for (int i = iMinA-1; i <= iMaxB + 1; ++i)
    {
        int iWork(0);
        for (auto p : vecPair)
        {
            if (i < p.first) iWork += C;
            else if (i <= p.second) iWork += G;
            else iWork += H;
        }
        iMaxWork = max(iMaxWork, iWork);
    }

    cout << iMaxWork;
    return 0;
}