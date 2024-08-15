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
        int cur_pos(i), nxt_pos(arr[i]);
        int set_arr[MAX_N + 1];
        copy(begin(arr), end(arr), begin(set_arr));

        for (int j = 0; j < m; j++){
            if(set_arr[nxt_pos] != nxt_pos) sum += nxt_pos;
            else break;
            
            int tmp_nxt_pos = set_arr[nxt_pos];
            set_arr[nxt_pos] = nxt_pos;

            cur_pos = nxt_pos;
            nxt_pos = tmp_nxt_pos;
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    
    return 0;
}