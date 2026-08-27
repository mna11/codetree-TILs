#include <iostream>
using namespace std;

int main() {
    int iCnt(1);
    int N(0);
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << iCnt++ << " ";
        }
        cout << endl;
    }
    return 0;
}