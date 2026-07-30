#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    int iInput(0), iTotalSum(0), iCnt(0);
    while(true)
    {
        cin >> iInput;
        if (iInput >= 30 || iInput < 20) break;
        iTotalSum += iInput;
        ++iCnt;
    }
    cout << fixed;
    cout << setprecision(2);
    cout << round(static_cast<float>(iTotalSum) / iCnt * 100) / 100 << endl;
    return 0;
}