#include <iostream>
using namespace std;

int main() {
    int N(0), iResult(0);
    cin >> N;
    for (int i = N; i <= 100; ++i) iResult += i;
    cout << iResult;
    return 0;
}