#include <iostream>
using namespace std;

int OutputVal(int n){
    if (n == 1) return 1;
    if (n == 2) return 2;

    return OutputVal(n-2) + n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << OutputVal(n);
    return 0;
}