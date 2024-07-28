#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, cnt(0), max_cnt(0);
    int arr[1001];

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (i == 0 || arr[i] <= arr[i-1]) cnt=0;
        max_cnt = max(max_cnt, ++cnt);
    }
    cout << max_cnt;
    return 0;
}