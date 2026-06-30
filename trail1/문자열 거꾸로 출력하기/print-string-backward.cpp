#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str("");
    while (true) {
        cin >> str;
        if (str.compare("END") == 0) break;
        reverse(str.begin(), str.end());
        cout << str << endl;
    }
    return 0;
}