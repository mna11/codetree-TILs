#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N(0), iTotal(0);
    int iInput(0);
    cin >> N; 
    for (int i = 0; i < N; ++i)
    {
        cin >> iInput;
        iTotal += iInput;
    }
    cout << iTotal << ' ' << round((float) iTotal / N * 10 )/10;
    return 0;
}