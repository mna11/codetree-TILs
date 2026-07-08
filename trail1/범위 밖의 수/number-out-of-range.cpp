#include <iostream>
using namespace std;

int main() {
    int a(0);
    cin >> a;
    if (a < 10 || a > 20) cout << "yes";
    else cout << "no";
    return 0;
}