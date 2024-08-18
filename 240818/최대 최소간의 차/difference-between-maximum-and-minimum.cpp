#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, k, cost, min_cost(INT_MAX), min_val, max_val;
vector<int> arr;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    min_val = arr[0];
    max_val = arr[0] + k;
    while(max_val <= 10000){
        cost = 0;
        for (int i = 0; i < n; i++){
            if (abs(arr[i] - min_val) < abs(arr[i] - max_val)){
                cost += abs(arr[i] - min_val);
            }
            else {
                cost += abs(arr[i] - max_val);
            }
        }
        min_cost = min(min_cost, cost);
        min_val++;
        max_val++;
    }

    cout << min_cost;
    return 0;
}