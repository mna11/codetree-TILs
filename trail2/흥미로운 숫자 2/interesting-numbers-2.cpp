#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int iResult(0);
    string strTmp;
    vector<int> vecInt(10);
    for (int i = X; i <= Y; ++i)
    {
        strTmp = to_string(i);
        vecInt.assign(10, 0);
        for (char c : strTmp)
        {
            vecInt[c-'0'] += 1;
        }
        sort(vecInt.begin(), vecInt.end(), greater<int>());
        if (vecInt[1] == 1 && vecInt[2] == 0)
        {
            ++iResult;
        } 
    }
    cout << iResult;
    return 0;
}