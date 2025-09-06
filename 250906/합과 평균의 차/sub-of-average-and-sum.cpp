#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    printf("%d\n%d\n%d", a+b+c, (a+b+c)/3, (a+b+c)-(a+b+c)/3);
    return 0;
}