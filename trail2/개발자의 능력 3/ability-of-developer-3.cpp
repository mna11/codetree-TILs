#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

vector<int> vec(6);

int GetDiff(int a, int b, int c)
{
    int iTeamA = vec[a] + vec[b] + vec[c];
    int iTeamB = accumulate(vec.begin(), vec.end(), 0) - iTeamA;
    return abs(iTeamA - iTeamB);
}


int main() {
    for (int i = 0; i < 6; ++i)
        cin >> vec[i];

    int iMin(INT_MAX);
    for (int i = 0; i < 4; ++i)
    {
        for (int j = i + 1; j < 5; ++j) 
        {
            for (int k = j + 1; k < 6; ++k)
            {
                iMin = min(iMin, GetDiff(i, j, k)); 
            }
        }
    }
    cout << iMin;
    return 0;
}