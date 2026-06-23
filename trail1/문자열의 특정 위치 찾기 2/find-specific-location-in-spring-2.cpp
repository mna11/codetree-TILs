#include <iostream>
#include <string>

using namespace std;

int main() {
    string str[] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int cnt(0);
    cin >> c;
    for (string s : str) {
        auto idx = s.find(c, 2);
        if (idx != string::npos && idx <= 3) {
            cout << s << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}