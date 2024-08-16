#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100
using namespace std;

int n, k, ans;
int rock[MAX_N];

bool isPossible(int max_v){
    int tmp[MAX_N] = {};
    int cnt(0);
    for (int i = 0; i < n; i++) {
        if (rock[i] <= max_v) tmp[cnt++] = i;
    }
    for (int i = 0; i < cnt - 1; i++){
        int dist = tmp[i + 1] - tmp[i];
        if (dist > k) return false; 
    }
    return true;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> rock[i];
    for (int i = n; i >= 1; i--){
        if (isPossible(i)){
            ans = i;
        }
        else break;
    }

    
    cout << ans;
    return 0;
}