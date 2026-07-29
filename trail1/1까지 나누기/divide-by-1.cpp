#include <iostream>
using namespace std;

int main() {
    int N(0), iCnt(1);
    cin >> N;
    while(true)
    {
        N /= iCnt; 
        iCnt++;
        if (N <= 1) break;
    }
    cout << iCnt - 1;
    return 0;
}