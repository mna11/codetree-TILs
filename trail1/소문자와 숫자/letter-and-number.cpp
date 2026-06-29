#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string str;
    cin >> str; 
    for (char c : str) {
        if (isdigit(c)) cout << c;
        else if (isalpha(c)) cout << static_cast<char>(tolower(c));
    }
    return 0;
}