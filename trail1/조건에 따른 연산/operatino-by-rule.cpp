#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(0);

    while(N < 1000)
    {
        if (N % 2 == 0) N = N * 3 + 1;
        else N = N * 2 + 2;
        ++iCnt;
    }
    cout << iCnt; 
    return 0;
}