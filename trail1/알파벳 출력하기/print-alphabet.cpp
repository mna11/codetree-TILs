#include <iostream>
using namespace std;

int main() {
    int N(0);
    int iCnt(0); 
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << (char)(iCnt + 'A');
            iCnt = (iCnt + 1) % ('Z' - 'A' + 1); 
        }
        cout << endl;
    }
    return 0;
}