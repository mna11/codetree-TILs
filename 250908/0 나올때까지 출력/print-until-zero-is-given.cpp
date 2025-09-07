#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input; 
    while (input != 0){
        cout << input << '\n';
        if (input == 0) break;
        cin >> input;
    }
    return 0;
}