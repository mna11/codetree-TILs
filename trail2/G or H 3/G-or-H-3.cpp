#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    int N(0), K(0);
    cin >> N >> K;
    vector<char> vec(10000, 0);
    map<char, int> m;
    m.insert(make_pair<char, int>('G', 1));
    m.insert(make_pair<char, int>('H', 2));

    for (int i = 0; i < N; ++i)
    {
        int iTmp(0);
        cin >> iTmp;
        cin >> vec[iTmp - 1];
    }

    int iMax(INT_MIN);
    for (int i = 0; i <= 10000 - K; ++i)
    {
        int iSum(0);
        for (int j = i; j <= i + K; ++j)
        {
            iSum += m[vec[j]];
        }
        iMax = max(iMax, iSum);
    }
    cout << iMax; 
    return 0;
}