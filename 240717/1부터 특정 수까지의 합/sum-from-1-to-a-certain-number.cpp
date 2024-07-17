#include <iostream>
using namespace std;

int sum(int n){
    int result = 0;
    for (int i = 1; i <= n; i++)
        result += i;
    return result / 10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}