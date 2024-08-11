#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int max_cnt(INT_MIN);
vector<int> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int k = 1; k <= 100; k++){
        int cnt = 0;
        for (int i = 0; i < n - 1; i++){ 
            for (int j = i + 1; j < n; j++){
                if (k - arr[i] == arr[j] - k) cnt++;
            }
        }
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}