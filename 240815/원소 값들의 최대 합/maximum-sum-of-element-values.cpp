#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int arr[MAX_N + 1];
int n, m, max_sum(INT_MIN);

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++){
        int sum(0);
        int cur_pos(i);

        for (int j = 0; j < m; j++){
            sum += arr[cur_pos];
            cur_pos = arr[cur_pos];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    
    return 0;
}