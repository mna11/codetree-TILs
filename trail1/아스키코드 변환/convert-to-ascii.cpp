#include <iostream>
using namespace std;

int main() {
    int iInput;
    char cInput;
    cin >> cInput >> iInput;
    cout << static_cast<int>(cInput) << ' ' << static_cast<char>(iInput) << flush;
    return 0;
}