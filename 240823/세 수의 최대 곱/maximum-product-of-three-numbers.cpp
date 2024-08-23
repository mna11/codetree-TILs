#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int n, ans;
vector<int> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    if(arr[0] == 0) ans = 0;
    else {
        ans = max(arr[0] * arr[1] * arr[2], arr[n-1] * arr[n-2] * arr[n-3]);
        ans = max(ans, arr[0] * arr[1] * arr[n-1]);
        ans = max(ans, arr[0] * arr[n-1] * arr[n-2]);
    }

    cout << ans;
    return 0;
}