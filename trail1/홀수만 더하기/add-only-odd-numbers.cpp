#include <iostream>
using namespace std;

int main() {
    int N(0), iResult(0), iInput(0);
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> iInput;
        if (iInput % 2 == 1 && iInput % 3 == 0) iResult += iInput;
    }
    cout << iResult;
    return 0;
}