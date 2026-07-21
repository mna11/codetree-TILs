#include <iostream>
using namespace std;

int main() {
    int iInput(0); 
    int cnt(0);
    for (int i = 0; i < 5; ++i) 
    {
        cin >> iInput;
        if (iInput % 2 == 0) ++cnt;
    }
    cout << cnt; 
    return 0;
}