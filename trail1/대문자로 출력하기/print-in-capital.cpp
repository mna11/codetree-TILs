#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >> str;
    for (char c : str) {
        if (isalpha(c)){
            cout << static_cast<char>(toupper(c));
        }
    }
    return 0;
}