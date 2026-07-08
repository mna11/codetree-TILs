#include <iostream>
#include <string>
using namespace std;

int main() {
    string bin;
    cin >> bin;
    int num(0);
    for (char c : bin) {
        num = num * 2 + (c - '0');
    }
    cout << num;
    return 0;
}