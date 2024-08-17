#include <iostream>
#include <string>
#include <array>

#define MAX_N 1000

using namespace std;

int n, tmp_cnt;
int arr[MAX_N], tmp[MAX_N +1];
array<int, MAX_N + 1> check;

int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++) cin >> arr[i];

    for (int i = 1; i <= n; i++){
        check.fill(false);
        tmp_cnt = 0;

        tmp[tmp_cnt++] = i;
        check[i] = true;
        for (int j = 0; j < n - 1; j++){
            
            int remain;
            remain = arr[j] - tmp[tmp_cnt - 1];
            if (remain <= 0 || check[remain]) break;

            tmp[tmp_cnt++] = remain;
            check[remain] = true;
        }
        if (tmp_cnt == n) {
            for (int i = 0; i < tmp_cnt; i++)
                cout << tmp[i] << " ";
            cout << endl;
        }
    }
    return 0;
}