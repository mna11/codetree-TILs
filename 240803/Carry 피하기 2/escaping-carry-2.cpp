#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

bool IsntCarry(int a, int b, int c){
    int digit_sum;
    int max_v = max(max(a, b), c);
    for (int i = max_v; i > 0; i/=10){
        digit_sum = a % 10 + b % 10 + c % 10;
        a /= 10; b /= 10; c /= 10;
        if (digit_sum >= 10) return false;
    }
    return true;
}


int main() {
    int n, max_num(INT_MIN);
    vector<int> arr;

    //init
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    //solve
    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n -1; j++){
            for (int k = j + 1; k < n; k++){
                if (IsntCarry(arr[i], arr[j], arr[k])) {
                    max_num = max(max_num, arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }
    if (max_num == INT_MIN) max_num = -1;
    cout << max_num;
    return 0;
}