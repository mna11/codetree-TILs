#include <iostream>
using namespace std;
int func(int a, int b){
    int result = 0;
    for (int i = 0; i < b; i++){
        result += a;
    }
    return result;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << func(a, b);
    return 0;
}