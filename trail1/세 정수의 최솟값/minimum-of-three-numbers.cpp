#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min;
    cout << (min = a > b ? b > c ? c : b : a > c ? c : a) << endl;
    return 0;
}