#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    while (A <= B){
        cout << A << " ";
        if (A % 2 != 0) A *= 2;
        else A += 3;
    }
    return 0;
}