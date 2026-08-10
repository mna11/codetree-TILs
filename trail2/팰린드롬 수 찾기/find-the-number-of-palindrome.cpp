#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int iCnt(0);
    for (int i = a; i <= b; ++i)
    {
        string str = to_string(i);

        if (str == string(str.rbegin(), str.rend())) ++iCnt;
    }
    cout << iCnt;
    return 0;
}