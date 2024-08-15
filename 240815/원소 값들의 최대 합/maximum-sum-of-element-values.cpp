#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int arr[MAX_N + 1];
int tmp[MAX_N + 1];
int n, m, max_sum(INT_MIN);

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++){
        int cur_pos = i;
        int next_pos = arr[cur_pos];
        int sum(0);
        copy(begin(arr), end(arr), begin(tmp));
        for (int j = 0; j < m; j++){
            if (tmp[cur_pos] == cur_pos) continue;
            sum += tmp[cur_pos];
            tmp[cur_pos] = cur_pos;
            
            cur_pos = next_pos;
            next_pos = tmp[next_pos];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    
    return 0;
}