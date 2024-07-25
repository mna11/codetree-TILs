#include <iostream>
using namespace std;

int main() {
    int n, cnt(0);
    int binary[20] = {};
    
    cin >> n;
    for (n; n >= 2; n/=2){
        binary[cnt++] = n % 2;
    }
    binary[cnt] = n;
    for (int i = cnt; i >= 0; i--) cout << binary[i];
    return 0;
}