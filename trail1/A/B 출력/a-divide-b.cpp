#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << A / B << '.';
    for (int i = 0; i < 20; ++i) 
    {
        A = (A % B) * 10;
        cout << A / B;
    }
    
    return 0;
}