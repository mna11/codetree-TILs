#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    for (int i = max(A,B); i >= min(A, B); --i)
        cout << i << ' ';
    return 0;
}