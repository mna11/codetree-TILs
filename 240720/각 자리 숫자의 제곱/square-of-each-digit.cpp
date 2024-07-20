#include <iostream>
#include <cmath>
using namespace std;

int SquareEachDigit(int n){
    if (n < 10) return pow(n, 2);
    return SquareEachDigit(n/10) + pow((n % 10), 2);
}

int main() {
    int n;
    cin >> n;
    cout << SquareEachDigit(n);
    return 0;
}