#include <iostream>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    for (int j = 1; j <= 9; ++j)
    {
        for (int i = B; i >= A; i-=2)
        {
            cout << i << " * " << j << " = " << i * j;
            if (i > A) cout << " / ";
        }
        cout << endl;
    }
    return 0;
}