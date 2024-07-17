#include <iostream>
using namespace std;

bool Include3Num(int n){
    for (int i = n; i > 0; i /= 10){
        if ((i % 10  == 3) || (i % 10  == 6) || (i % 10  == 9)) return true;
    }
    return false;
}


int func(int a, int b){
    int cnt = 0;
    for (int i = a; i <= b; i++ ){
        if (i % 3 == 0 || Include3Num(i)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << func(a, b);
    return 0;
}