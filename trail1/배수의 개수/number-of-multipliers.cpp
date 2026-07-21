#include <iostream>
using namespace std;

int main() {
    int iInput(0), cnt3(0), cnt5(0);
    for (int i = 0; i < 10; ++i)
    {
        cin >> iInput;
        if (iInput % 3 == 0) ++cnt3; 
        if (iInput % 5 == 0) ++cnt5;
    }
    cout << cnt3 << ' ' << cnt5 << flush;
    return 0;
}