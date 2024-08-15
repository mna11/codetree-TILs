#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_M 100

using namespace std;

int input[MAX_M][2] = {{0,},};
int n, m, max_cnt(INT_MIN);

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> input[i][0] >> input[i][1];

    for (int a = 1; a <= n; a++){
        for (int b = 1; b <= n; b++){
            int cnt(0);
            for (int i = 0; i < m; i++){
                if ((a == input[i][0] && b == input[i][1]) ||
                    (a == input[i][1] && b == input[i][0])) cnt++;
            }
            max_cnt = max(max_cnt, cnt);
        }
    }
    cout << max_cnt;
    return 0;
}