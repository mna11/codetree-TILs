#include <iostream>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    for (int i = 1; i <= A; ++i)
    {
        for (int j = 1; j <= B; ++j)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
    return 0;
}