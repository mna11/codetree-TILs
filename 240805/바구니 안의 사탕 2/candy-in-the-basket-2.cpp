#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int n, k, max_sum(INT_MIN), sum;
vector<int> arr;

int main() {
    cin >> n >> k;
    arr.resize(101, 0);
    for (int i = 0; i < n; i++){
        int candy, basket_position;
        cin >> candy >> basket_position;
        arr[basket_position] = candy;
    }

    for (int c = k + 1; c <= 100 - k; c++){
        int sum(0);
        for (int idx = c - k; idx <= c + k; idx++) sum += arr[idx];
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}