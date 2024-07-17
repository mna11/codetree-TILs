#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int MaxCommonDivisor(int a, int b){
    int min_a_b = min(a,b);
    int max_common_divisor = INT_MIN;
    for (int i = 1; i < a; i++){
        if (a % i == 0 && b % i ==0){
            max_common_divisor = max(max_common_divisor, i);
        }
    }
    return max_common_divisor;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    int result;
    cin >> a >> b;
    result = MaxCommonDivisor(a, b);
    cout << result;
    return 0;
}