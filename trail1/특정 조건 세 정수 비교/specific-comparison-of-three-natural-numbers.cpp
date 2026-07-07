#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (min({a, b, c}) == a) {
        cout << 1 << ' ';
    }
    else {
        cout << 0 << ' ';
    }

    if (a == b && b == c) {
        cout << 1 << ' ';
    }
    else {
        cout << 0 << ' ';
    }
    return 0;
}