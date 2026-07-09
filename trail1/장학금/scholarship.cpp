#include <iostream>
using namespace std;

int main() {
    int iMiddleScore(0), iFinalScore(0);
    cin >> iMiddleScore >> iFinalScore;
    if (iMiddleScore >= 90) {
        if (iFinalScore >= 95) cout << 100000;
        else if (iFinalScore >= 90) cout << 50000;
        else cout << 0;
    }
    else {
        cout << 0;
    }
    return 0;
}