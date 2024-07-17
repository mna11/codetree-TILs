#include <iostream>
using namespace std;

bool IsMagicNumber(int n){
    bool result = false;
    if ((n % 2 == 0) && (n/10 + n%10) % 5 == 0) result = true;
    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (IsMagicNumber(n)) cout << "Yes";
    else cout << "No";
    return 0;
}