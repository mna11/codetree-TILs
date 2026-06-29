#include <iostream>
using namespace std;

int main() {
    int iInput;
    for (int i = 0; i < 5; ++i){
        cin >> iInput;
        cout << static_cast<char>(iInput) << ' ';
    }
    return 0;
}