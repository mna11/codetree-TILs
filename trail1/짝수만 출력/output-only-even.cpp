#include <iostream>
using namespace std;

int main() {
    int A(0), B(0), iTmp(0);
    cin >> A >> B;
    if (A % 2 != 0) A += 1; 
    while (A <= B) {
        cout << A << ' ';
        A += 2;
    }

    return 0;
}