#include <iostream>
#include <string>

using namespace std;

int BinToDec(string s){
    int dec(0);
    for (int i = 0; i < s.length(); i++){
        dec *= 2;
        if (s[i] == '1') dec += 2;
    }
    return dec / 2;
}

int main() {
    bool has_zero = false;
    string str;
    int result;
    cin >> str;
    
    for (int i = 0; i < str.length(); i++){
        if (str[i] == '0') {
            str[i] = '1';
            result = BinToDec(str);
            has_zero = true;
            break;
        }
    }
    if (!has_zero) {
        str[str.length() - 1] = '0';
        result = BinToDec(str);
    }
    cout << result;
    return 0;
}