#include <iostream>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    int prod(1); 
    for (int i = 1; i <= B; ++i)
    {
        if (i % A == 0) prod *= i; 
    }
    cout << prod;
    return 0;
}