#include <iostream>
using namespace std;

int main() {
    float fLeftE, fRightE;
    cin >> fLeftE >> fRightE;
    if (fLeftE >= 1.0f && fRightE >= 1.0f) cout << "High" << endl;
    else if (fLeftE >= 0.5f && fRightE >= 0.5f) cout << "Middle" << endl;
    else cout << "Low" << endl;
    return 0;
}