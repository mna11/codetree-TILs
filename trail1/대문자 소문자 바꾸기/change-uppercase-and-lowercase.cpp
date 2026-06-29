#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    for (char c : str) {
        if (c - 'a' >= 0) cout << static_cast<char>(toupper(c));
        else if (c - 'A' >= 0) cout << static_cast<char>(tolower(c));
    }
    return 0;
}