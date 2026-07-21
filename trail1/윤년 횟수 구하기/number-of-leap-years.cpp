#include <iostream>
using namespace std;

int main() {
    int N;
    int cnt(0);
    cin >> N;
    for (int i = 1; i <= N; ++i){
        if ((i % 4 == 0)) {
            if (i % 100  == 0 && i % 400 != 0 ) continue;
            ++cnt;
        }
        else {
            // 아님
        }
    }
    cout << cnt; 
    return 0;
}