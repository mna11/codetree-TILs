#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    double b = (double)(10000 * w)/(h*h);
    printf("%d\n", (int)b);
    if (b >= 25) cout << "Obesity";
    return 0;
}