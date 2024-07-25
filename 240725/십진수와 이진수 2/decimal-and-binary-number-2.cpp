#include <iostream>
#include <string>

using namespace std;

int BinToDec(string s){
    int num(0);
    for (int i = 0; i < s.length(); i++) num = num * 2 + (s[i] -'0');
    return num;
}

void DecToBin(int d1, string& result){
    int cnt(0), max_size(0);
    int d;
    
    for (d = d1; d >= 2; d/=2){
        max_size++;
    }
    result.resize(max_size);
    for (d = d1; d >= 2; d/=2){
        result[cnt++] = d % 2 + '0';
    }
    
    result[cnt] = d + '0';
}

int main() {
    string bin, result;
    int dec;
    cin >> bin;

    dec = BinToDec(bin);
    dec *= 17;
    DecToBin(dec, result);

    for (int i = result.length(); i>=0; i--) cout << result[i];
    return 0;
}