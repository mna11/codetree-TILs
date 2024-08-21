#include <iostream>
#include <array>
#include <algorithm>
#include <climits>

using namespace std;

array<int, 3> arr;
array<int, 3> ans_arr;

int Solve(){
    if (ans_arr == arr){
        return 0;
    }
    else {
        if (arr[1] == ans_arr[2]){
            return 1;
        }
        else {
            return 2;
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    arr = {a, b, c};
    ans_arr = arr;

    sort(ans_arr.begin(), ans_arr.end());
    ans_arr[1] = ans_arr[0] + 1;
    ans_arr[2] = ans_arr[1] + 1;

    cout << Solve();

    return 0;
}