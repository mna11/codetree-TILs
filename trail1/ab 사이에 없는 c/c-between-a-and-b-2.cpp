#include <iostream>
using namespace std;

int main() {
    int a(0), b(0);
    cin >> a >> b;
    int c(0);
    cin >> c;
    bool bSatis(true);
    for (int i = a; i <= b; ++i)
    {
        if (i % c == 0) bSatis = false;
    }
    if (bSatis) cout << "YES";
    else cout << "NO";
    return 0;
}