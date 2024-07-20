#include <iostream>
using namespace std;

int Count(int n, int& cnt){
    if (n == 1) return cnt;
    if (n % 2 == 0){
        cnt++;
        return Count(n/2, cnt);
    }
    else {
        cnt++;
        return Count(n/3, cnt);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt(0);
    cin >> n;
    cout << Count(n, cnt);
    return 0;
}