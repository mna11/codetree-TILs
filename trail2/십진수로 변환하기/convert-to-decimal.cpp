#include <iostream>
#include <string>
using namespace std;

int main() {
    /*
    string bin;
    cin >> bin;
    int num(0);
    for (char c : bin) {
        num = num * 2 + (c - '0');
    }
    cout << num;
    return 0;
    */

    string bin;
    cin >> bin;
    int number = stoi(bin, nullptr, 2);
    cout << number;
}