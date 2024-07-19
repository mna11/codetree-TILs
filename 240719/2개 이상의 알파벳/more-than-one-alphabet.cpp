#include <iostream>
#include <string>
using namespace std;

bool FindDuplicate(string &s){
    while (s.length() >= 0){
        char check = s[0];
        s.erase(0, 1);
        if (s.find(check) != string::npos) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    if (FindDuplicate(s)) cout << "Yes";
    else cout << "No";

    return 0;
}