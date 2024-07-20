#include <iostream>
using namespace std;

void Func2(int n){
    if (n == 0) return;
    cout << n << " ";
    Func2(n-1);
    return;
}

void Func1(int n){
    if (n == 0) return;
    Func1(n-1);
    cout << n << " ";
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Func1(n);
    cout << endl;
    Func2(n);
    return 0;
}