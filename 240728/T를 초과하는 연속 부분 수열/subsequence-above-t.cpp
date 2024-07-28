#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, t, cnt(0), max_cnt(0);
    int arr[1001];

    cin >> n >> t;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        cnt++;
        if (i == 0 || arr[i] <= t) cnt = 0;
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt;
    return 0;
}