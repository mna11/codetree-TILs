#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iCnt(0);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << iCnt % 9 + 1;
            ++iCnt;
        }
        cout << endl;
    }
    return 0;
}