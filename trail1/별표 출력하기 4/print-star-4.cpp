#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(N);
    for (int i = 0; i < 2 * N - 1; ++i)
    {
        for (int j = 0; j < iCnt; ++j)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < N - 1) iCnt--;
        else iCnt++;
    }

    return 0;
}