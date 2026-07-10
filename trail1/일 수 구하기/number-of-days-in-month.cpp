#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n(0);
    cin >> n;

    if (n % 2 == 1 && n < 8
        || n % 2 == 0 && n >= 8) {
        cout << 31 << endl;
    }
    else if (n == 2) {
        cout << 28 << endl;
    }
    else if (n % 2 == 0 && n < 8
            || n % 2 == 1 && n >= 8) {
        cout << 30 << endl;
    }
    return 0;
}