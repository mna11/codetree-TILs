#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    int iResult(0), iCnt(0);
    for (int i = A; i <= B; ++i)
    {
        if (i % 5 == 0 || i % 7 == 0) {
            iResult += i;
            iCnt++; 
        }
    }
     cout << iResult;
    cout << fixed;
    cout .precision(1);
    cout << ' ' << round((float)iResult / iCnt * 10) / 10 << flush; 
    return 0;
}