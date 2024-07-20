#include <iostream>
using namespace std;

void Func(int n){
    if (n == 0) return;
    Func(n-1);
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int c;
    cin >> c;
    Func(c);
    return 0;
}