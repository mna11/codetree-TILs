#include <iostream>
using namespace std;

int main() {
    int iInput(0), cnt(0);
    for (int i = 0; i < 10; ++i)
    {
        cin >> iInput;
        if (iInput % 2 == 1) ++cnt;
    }
    cout << cnt;
    return 0;
}