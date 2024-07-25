#include <iostream>
#include <string>

using namespace std;

int main() {
    string bin;
    int num(0);

    cin >> bin;
    for (int i = 0; i < bin.length(); i++){
        num = num * 2 + (bin[i] - 48);
    }
    cout << num;
    return 0;
}