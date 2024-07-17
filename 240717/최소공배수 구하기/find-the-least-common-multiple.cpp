#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int solve(int n, int m){
    int min_ = min(n, m);
    int max_ = INT_MIN;
    int result;
    for (int i = 1; i <= min_; i++){
        if (n % i == 0 && m % i == 0){
            max_ = max(max_, i);
        }
    }
    result = max_ * (n / max_) * (m / max_);
    return result;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;

    cout << solve(n, m);
    return 0;
}