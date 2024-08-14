#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n, m, max_sum(INT_MIN), sum;
int arr[MAX_N + 1];
int tmp[MAX_N + 1];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    //solve
    //i - 시작 위치
    for (int i = 1; i <= n; i++){
        int cur_pos = i;
        int next_pos = arr[i];
        sum = 0;
        copy(begin(arr), end(arr), begin(tmp));
        for (int j = 0; j < m; j++){
            sum += next_pos;
            int tmp123 = tmp[next_pos];

            tmp[next_pos] = next_pos;
            cur_pos = next_pos;
            next_pos = tmp123;
        }
        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
    return 0;
}