#include <iostream>
using namespace std;

int main() {
    int iInput(0);
    while(true)
    {
        cin >> iInput;
        if (0 == iInput) break;
        cout << iInput << endl;
    }
    return 0;
}