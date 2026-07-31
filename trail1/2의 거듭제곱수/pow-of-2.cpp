#include <iostream>
using namespace std;

int main() {
    int N(0);
    int x(0);
    cin >> N;
    while(N != 1)
    {
        N /= 2;
        x++;
    }
    cout << x << endl;
    return 0;
}