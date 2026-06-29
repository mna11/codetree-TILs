#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int iTotal(0);
    cin >> str;
    for (char c : str) {
        if (isdigit(c)) iTotal += static_cast<int>(c) - '0';
    }
    cout << iTotal;
    return 0;
}