#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int iMax(INT_MIN);
    for (int i = X; i <= Y; ++i)
    {
        string str = to_string(i);
        int iTotal(0); 
        for (char c : str)
        {
            iTotal += c - '0';
        }
        iMax = max(iMax, iTotal); 
    }
    cout << iMax;
    return 0;
}