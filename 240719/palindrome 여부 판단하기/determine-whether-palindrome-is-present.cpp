#include <iostream>
#include <string>

using namespace std;

bool func(string &s1){
    string s2;
    for (int i = s1.length()-1; i >= 0; i--){
        s2.append(1, s1[i]);
    }
    if (s1.compare(s2) == 0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    if (func(s)) cout << "Yes";
    else cout << "No";
    return 0;
}