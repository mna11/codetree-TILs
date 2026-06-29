#include <iostream>
using namespace std;

int main() {
    char cInput;
    cin >> cInput;
    cInput = cInput + 1 > 'z' ? 'a' : cInput + 1;
    cout << cInput;
    return 0;
}