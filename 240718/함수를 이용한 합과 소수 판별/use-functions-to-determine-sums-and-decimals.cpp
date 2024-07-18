#include <iostream>
using namespace std;

bool func2(int n){
    int s(0);
    for (int i = n; i > 0; i /= 10)
        s += (i % 10);
    if (s % 2 == 0) return true;
    else return false; 
}

bool func1(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0) return false;
    }
    return func2(n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int cnt(0);
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        if (func1(i)) cnt++;

    cout << cnt;
    return 0;
}