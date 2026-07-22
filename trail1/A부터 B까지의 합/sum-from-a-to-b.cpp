#include <iostream>
using namespace std;

int main() {
    int iA(0), iB(0);
    cin >> iA >> iB;
    int iResult(0);
    for (int i = iA; i <= iB; ++i) iResult += i;
    cout << iResult;
    return 0;
}