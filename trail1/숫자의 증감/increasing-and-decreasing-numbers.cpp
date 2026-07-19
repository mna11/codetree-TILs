#include <iostream>
using namespace std;

int main() {
    char C(0);
    int N(0);
    cin >> C >> N;

    if (C == 'A'){
        for (int i = 1; i <= N; ++i) cout << i << ' ';
    } 
    else 
        for (int i = N; i >= 1; --i) cout << i << ' ';
    return 0;
}