#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;

    bool bS(true);
    for (int i = 2; i < N; ++i)
    {
        if (N % i == 0) bS = false;
    } 

    if (bS) cout << "N";
    else cout << "C";
    return 0;
}