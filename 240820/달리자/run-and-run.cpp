#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int a[MAX_N];
int b[MAX_N];
int all_left_sum, ans;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 1; i < n; i++){
        all_left_sum += a[i] * i;
    }
    for (int i = 1; i < n; i++){
        ans += b[i] * i;
    }
    ans -= all_left_sum;
    cout << ans;

    return 0;
}