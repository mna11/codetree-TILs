#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    printf("%.2f", (double)(a + b) / (a - b));
    return 0;
}