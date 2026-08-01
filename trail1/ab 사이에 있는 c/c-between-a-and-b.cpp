#include <iostream>
using namespace std;

int main() {
    int a(0), b(0), c(0);
    cin >> a >> b >> c;
    bool bSat(false);
    for (int i = a; i <= b; ++i)
    {
        if (i % c ==0) bSat = true;
    }
    cout << (bSat ? "YES" : "NO") << endl;
    return 0;
}