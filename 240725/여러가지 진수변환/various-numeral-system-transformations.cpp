#include <iostream>
#include <string>

using namespace std;

int main() {
    string n;
    int b, num(0);

    cin >> n >> b;
    for (int i = 0; i < n.length(); i++){
        num = num * b + (n[i] - '0');
    }
    cout << num;
    return 0;
}