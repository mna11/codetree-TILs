#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int iResult(0);
    for (int i = A; i <= B; ++i)
    {
        if (i % 2 == 0) iResult += i;
    }
    cout << iResult;
    return 0;
}