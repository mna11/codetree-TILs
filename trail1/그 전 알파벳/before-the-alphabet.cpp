#include <iostream>
using namespace std;

int main() {
    char cInput;
    cin >> cInput;
    cInput = cInput - 1 < 'a' ? 'z' : cInput - 1;
    cout << cInput << flush;
    return 0;
}