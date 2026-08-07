#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(1);
    for (int i = 1; i <= 2 * N; ++i)
    {
        for (int j = 0; j < iCnt; ++j)
        {
            cout << "* ";
        }
        cout << endl;
        if (i < N) iCnt++;
        else iCnt--;
    }

    return 0;
}