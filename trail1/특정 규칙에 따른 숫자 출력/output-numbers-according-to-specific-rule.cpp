#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(1);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "  ";
        }
        for (int j = N-i; j >= 1; --j)
        {
            cout << iCnt << " ";
            iCnt = (iCnt % 9) + 1; 
        }
        cout << endl;
    }
    return 0;
}