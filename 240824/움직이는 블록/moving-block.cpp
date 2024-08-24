#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int n;
vector<int> b_cnt;
int same_block_cnt;
int ans;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        int b;
        cin >> b;
        same_block_cnt += b;
        b_cnt.push_back(b);
    }
    same_block_cnt /= n;

    for (int i = 0; i < n; i++){
        ans += abs(same_block_cnt - b_cnt[i]);
    }
    ans /= 2;
    
    cout << ans;

    return 0;
}