#include <iostream>
using namespace std;

int Func(int n, int cnt){
    if (n == 1) return cnt;
    if (n % 2 == 0) {
        cnt++;
        return Func(n/2, cnt);
    }
    else {
        cnt++;
        return Func(n*3 + 1, cnt);
    }
}

int main() {
    int cnt(0);
    int n;
    cin >> n;
    cout << Func(n, cnt);
    return 0;
}