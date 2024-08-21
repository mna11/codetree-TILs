#include <iostream>
#include <array>
#include <algorithm>
#include <climits>

using namespace std;

array<int, 3> arr;
array<int, 3> tmp_arr;
array<int, 3> ans_arr;
int ans(INT_MAX);

int Solve(){
    int cnt(0);
    for (int n1 : ans_arr){
        for (int n2 : arr){
            if (n2 == n1) cnt++;
        }
    }

    return 3 - cnt;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    arr = {a, b, c};
    sort(arr.begin(), arr.end());
    tmp_arr = arr;

    for (int i = 0; i < 3; i++){
        ans_arr[0] = tmp_arr[i];
        ans_arr[1] = ans_arr[0] + 1;
        ans_arr[2] = ans_arr[1] + 1;

       ans = min(ans, Solve());
    }

    if (arr[0] + 1 == arr[1] ||
        arr[1] + 1 == arr[2]) ans = 2;

    cout << ans;

    return 0;
}