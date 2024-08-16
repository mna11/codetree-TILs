#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, k, max_v, min_v, max_cnt(INT_MIN);
vector<int> arr;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    
    // i -> 시작점 
    for (int i = 0; i < n; i++){
        min_v = arr[i];
        max_v = INT_MIN;
        for (int cnt = 0; cnt < n - i; cnt++){
            max_v = max(max_v, arr[i + cnt]);
            if (max_v - min_v > k) {
                max_cnt = max(max_cnt, cnt);
                break;
            }
        }
    }

    cout << max_cnt;
    return 0;
}