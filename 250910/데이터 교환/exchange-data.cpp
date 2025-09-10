#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tmp = b;
    int tmp2 = c;
    b = a;
    c = tmp;
    a = tmp2;

    cout << a << '\n' << b << '\n' << c;
    return 0;
}