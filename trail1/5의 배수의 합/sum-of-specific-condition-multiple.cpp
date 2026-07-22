#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    int iResult(0);
    for (int i = min(A, B); i <= max(A, B); ++i)
    {
        if (i % 5 == 0) iResult += i;
    }
    cout << iResult << flush; 
    return 0;
}