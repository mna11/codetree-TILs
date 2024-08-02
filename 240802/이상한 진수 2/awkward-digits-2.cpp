#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int BinToDec(string s){
    int dec(0);
    for (int i = 0; i < s.length(); i++){
        dec *= 2;
        if (s[i] == '1') dec += 2;
    }
    return dec / 2;
}

// 0이 있을 경우, 최앞단 0을 1로 바꿔주고 출력 -> 최댓값
// 만약 0이 없을 경우, 가장 마지막 부분을 0으로 바꿔주고 출력 -> 최댓값
// int main() {
//     bool has_zero = false;
//     string str;
//     int result;
//     cin >> str;
    
//     for (int i = 0; i < str.length(); i++){
//         if (str[i] == '0') {
//             str[i] = '1';
//             result = BinToDec(str);
//             has_zero = true;
//             break;
//         }
//     }
//     if (!has_zero) {
//         str[str.length() - 1] = '0';
//         result = BinToDec(str);
//     }
//     cout << result;
//     return 0;
// 


// 완탐
int main(void){
    string str;
    int max_dec(INT_MIN);
    
    cin >> str;
    for (int i = 0; i < str.length(); i++){
        int dec;

        str[i] ^= 1;
        dec = BinToDec(str);
        max_dec = max(max_dec, dec);
        str[i] ^= 1;
    }

    cout << max_dec;
}