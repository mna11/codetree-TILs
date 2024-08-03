#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, max_pair(INT_MIN);
    vector<int> arr;

    //init
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    //solve
    for (int i = 0; i < n - 2; i++){
        int sum_pair(0);
        for (int j = i + 2; j < n; j++){
            sum_pair = arr[i] + arr[j];
            max_pair = max(max_pair, sum_pair);
        }
    }

    cout << max_pair;
    return 0;
}