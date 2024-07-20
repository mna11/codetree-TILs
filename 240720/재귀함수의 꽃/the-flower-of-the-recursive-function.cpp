#include <iostream>
using namespace std;

void PrintN(int n){
    if (n == 0) return;
    cout << n << " ";
    PrintN(n-1);
    cout << n << " ";
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintN(n);

    return 0;
}