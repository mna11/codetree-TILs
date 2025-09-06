#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int weight = 13;
    double gravity = 0.165;

    cout << weight << " * " << setiosflags(ios::fixed) << setprecision(6) << gravity << " = " << weight * gravity << '\n';

    return 0;
}