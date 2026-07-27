#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int Prod(1); 
    for (int i = 1; i <= 10; ++i)
    {   
        Prod *= i;
        if (Prod >= N) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}