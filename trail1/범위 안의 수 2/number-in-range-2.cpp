#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int iTotal(0), iCnt(0);
    for(int i = 0; i < 10; ++i)
    {
        int iInput(0);
        cin >> iInput; 
        if (0 <= iInput && iInput <= 200){
            iTotal += iInput;
            iCnt++; 
        }
    }
    cout << iTotal;
    cout << fixed;
    cout .precision(1);
    cout << ' ' << round((float)iTotal / iCnt * 10) / 10 << flush; 
    return 0;
}