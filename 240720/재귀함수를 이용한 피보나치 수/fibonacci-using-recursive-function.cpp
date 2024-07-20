#include <iostream>
using namespace std;

int Func(int n){
    if (n < 3) return 1;
    return Func(n-1) + Func(n-2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << Func(n);

    return 0;
}