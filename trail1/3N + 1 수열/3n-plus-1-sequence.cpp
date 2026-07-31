#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(0);
    while(true)
    {
        if (N == 1) break;

        if (0 == N % 2) N /= 2;
        else N = N * 3 + 1;
        ++iCnt;
    }

    cout << iCnt;
    return 0;
}