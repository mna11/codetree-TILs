#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>

#define MAX_NUMBER 10000

using namespace std;

int n, k, min_n, max_n, cost, min_cost(INT_MAX);
vector<int> arr;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    min_n = arr[0];
    max_n = min_n + k;
    for (max_n; max_n <= MAX_NUMBER; max_n++, min_n++){
        cost = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] >= min_n && arr[i] <= max_n) continue;
            if (abs(arr[i] - min_n) <= abs(arr[i] - max_n)) cost += abs(arr[i] - min_n);
            else cost += abs(arr[i] - max_n);
        }
        min_cost = min(min_cost, cost);
    }   

    cout << min_cost;


    return 0;
}