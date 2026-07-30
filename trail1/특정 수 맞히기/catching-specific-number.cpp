#include <iostream>
using namespace std;

int main() {
    int iAnswer(25);
    int iInput(0);
    while(true)
    {
        cin >> iInput;
        if (iInput < 25) cout << "Higher" << endl;
        else if (iInput > 25) cout << "Lower" << endl;
        else {
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}