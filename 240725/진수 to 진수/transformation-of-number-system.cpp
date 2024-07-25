#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    string n, result;
    int dec(0), cnt(0);

    cin >> a >> b >> n;
    result.max_size();
    for (int i = 0; i < n.length(); i++) dec = dec * a + (n[i] - '0');
    for (; dec>=b; dec/=b){
        result[cnt++] = dec % b + '0';
    }
    result[cnt] = dec + '0';
    for (int i = cnt; i >= 0; i--) cout << result[i];
    return 0;
}