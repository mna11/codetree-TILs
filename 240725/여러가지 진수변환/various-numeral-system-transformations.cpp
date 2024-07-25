#include <iostream>

using namespace std;

int main() {
    int n, b, cnt;
    int result[20];
    cin >> n >> b;
    for (n; n >= b; n/=b){
        result[cnt++] = n % b;
    }
    result[cnt] = n;
    for (int i = cnt; i >= 0; i--) cout << result[i];
    return 0;
}