#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// class Num{
// public:
//     char sign;
//     int num;
//     Num() = default;
//     Num(char sign, int num) : sign(sign), num(num) {}
//     ~Num() = default;
// };

int n, ans;
//vector<Num> arr;
vector<int> arr;

// bool compare(Num a, Num b){
//     return a.num > b.num;
// }


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