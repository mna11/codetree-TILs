#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(1);
    for (int i = 0; i < 2 * N; ++i)
    {
        for (int j = 0; j < iCnt; ++j)
        {
            cout << "*"; 
        }
        cout <<"\n" << endl;

        if (i < N - 1) iCnt++;
        else iCnt--;
    }
    return 0;
}