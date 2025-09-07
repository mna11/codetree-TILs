#include <iostream>
using namespace std;

int main() {
    int answer = 25;
    int input;
    cin >> input;
    while (input != answer){
        if (input > answer) cout << "Lower" << '\n';
        else if (input < answer) cout << "Higher" << '\n';
        cin >> input;
    }
    cout << "Good" << '\n';
    return 0;
}