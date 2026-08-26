#include <iostream>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    for (int j = 2; j <= 8; j+=2)
    {
        for (int i = B; i >= A; --i)
        {
            cout << i << " * " << j << " = " << i * j;
            if (i > A) cout << " / ";
        }
        cout << endl;
    }
    return 0;
}