#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << setiosflags(ios::fixed) << setprecision(2) << round(n * 100) / 100 << endl;
    return 0;
}