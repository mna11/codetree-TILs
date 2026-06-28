#include <iostream>
using namespace std;

int main() {
    string str, command;
    cin >> str >> command;

    for (const char c : command) {
        if (c == 'L') {
            str = str.substr(1, str.size() - 1) + str.substr(0, 1);
        }
        else if (c == 'R') {
            str = str.substr(str.size() - 1, 1) + str.substr(0, str.size()-1);
        }
    }
    cout << str << flush;
    return 0;
}