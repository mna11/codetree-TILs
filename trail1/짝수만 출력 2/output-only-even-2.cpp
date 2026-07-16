#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> B >> A;
    if(B%2 != 0) --B;

    while(B >= A)
    {
        cout << B << ' ';
        B -=2; 
    }
    return 0;
}