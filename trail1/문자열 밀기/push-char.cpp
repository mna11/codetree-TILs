#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    cout << str.substr(1, str.size() - 1) + str.substr(0, 1);
    return 0;
}