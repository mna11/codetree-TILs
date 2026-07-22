#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    int iTotal(0);
    for (int i = 1; i < N; ++i)
    {
        if (N % i == 0) iTotal += i;
    }
    if (iTotal == N) {
        cout << 'P' << endl;
    } 
    else {
        cout << 'N' << endl; 
    }
    return 0;
}