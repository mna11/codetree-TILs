#include <iostream>
using namespace std;

void PrintEvenOdd(int& n) {
    if (n % 2 == 0) cout <<"even" << endl;
    else cout << "odd" << endl;
}

int main() {
    int a, b;
    cin >> a >> b;

    PrintEvenOdd(a);
    PrintEvenOdd(b);
    return 0;
}