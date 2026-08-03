#include <iostream>
using namespace std;

int main() {
    int A(0), B(0);
    bool bS(false);
    cin >> A >> B;
    for (int i = A; i <= B; ++i)
    {
        if (1920 % i == 0 && 2880 % i == 0) bS = true;
    }
    cout << bS << endl;
    return 0;
}