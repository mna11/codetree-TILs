#include <iostream>
#include <string>
using namespace std;

bool FindDiffer2Upper(string &s){
    char check = s[0];
    while (s.length() > 0){
        if (check != s[0]) return true;

        check = s[0];
        s.erase(0, 1);
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    if (FindDiffer2Upper(s)) cout << "Yes";
    else cout << "No";

    return 0;
}