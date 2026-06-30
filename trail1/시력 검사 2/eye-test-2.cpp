#include <iostream>
using namespace std;

int main() {
    float DE(0.f);
    cin >> DE;
    if (DE >= 1.0f) cout << "High";
    else if (DE >= 0.5f) cout << "Middle";
    else cout << "Low";
    return 0;
}