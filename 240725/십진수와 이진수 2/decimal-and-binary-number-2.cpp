#include <iostream>
#include <string>

using namespace std;

int BinToDec(string s){
    int num(0);
    for (int i = 0; i < s.length(); i++) num = num * 2 + (s[i] -'0');
    return num;
}

void DecToBin(int d, string& result){
    int cnt(0);
    for (d; d >= 2; d/=2){
        result[cnt++] = d % 2 + '0';
    }
    result[cnt] = d + '0';
    for (int i = cnt; i >= 0; i--) cout << result[i];
}

int main() {
    string bin, result;
    int dec;

    result.max_size();
    cin >> bin;
    
    dec = BinToDec(bin);
    dec *= 17;
    DecToBin(dec, result);
    return 0;
}