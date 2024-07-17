#include <iostream>
#include <algorithm>
using namespace std;

int min_val(int a, int b, int c){
    return min(a, b, c);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    cout << min_val(a,b,c);
    return 0;
}