#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100
#define MAX_NUMBER 1000000

using namespace std;

int n, k, cnt, ans;
int line[MAX_N + 1];
bool is_boom[MAX_N + 1];
int number_cnt[MAX_NUMBER + 1];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> line[i];
    }

    for (int i = 1; i <= n; i++){
        for (int j = i + 1; j <= n + k; j++){
            if (line[i] == line[j]){
                is_boom[i] = is_boom[j] = true;
            }
        }
    }

    for (int i = 1; i <= n; i++){
        if (is_boom[i]) number_cnt[line[i]]++;
        if (cnt <= number_cnt[line[i]]){
            cnt = number_cnt[line[i]];
            ans = line[i];
        }
    }

    cout << ans;

    return 0;
}