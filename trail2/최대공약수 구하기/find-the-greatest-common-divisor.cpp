#include <iostream>

using namespace std;

int n, m;

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b,a%b);
}

int main() {
    cin >> n >> m;
    cout << GCD(n,m);
    return 0;
}