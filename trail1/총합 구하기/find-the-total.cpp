#include <iostream>
using namespace std;

int main() {
    int A, B, iTotal(0); 
    cin >> A >> B;
    for (int i = A; i <= B; ++i)
    {
        if (i % 6== 0 &&i % 8 != 0) iTotal += i;
    }
    cout << iTotal;
    return 0;
}