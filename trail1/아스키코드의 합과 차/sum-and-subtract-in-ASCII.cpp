#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    cout << a + b << " " << max(a, b) - min(a, b) << flush;
    return 0;
}