#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> arr;
int n, k, max_sum(INT_MIN);

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < n - k; i++){
        int sum(0);
        for (int j = i; j < i + k; j++) sum += arr[j];
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}