#include <iostream>
using namespace std;

int main() {
    int A(0);
    cin >> A; 
    for (int i = 1; i <= A; ++i)
    {
        if (i % 2 == 0 && i % 4 !=0 || i / 8 % 2 == 0 || i % 7 < 4) continue;
        cout << i << ' ';
    }
    return 0;
}