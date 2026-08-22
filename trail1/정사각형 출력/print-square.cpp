#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N(0);
    cin >> N;
    int iCnt(1);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << iCnt++ << " ";
        }
        cout << endl;
    }
    return 0;
}