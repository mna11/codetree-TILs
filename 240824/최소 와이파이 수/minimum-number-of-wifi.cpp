#include <iostream>
#include <vector>

using namespace std;

int n, m, wifi_cnt, cur_pos, nxt_pos;
vector<int> houses;

bool CheckRangeInPerson(int s){
    for (int i = s - m; i <= s + m; i++){
        if ( i < 0 || i >= n) continue;
        
        if (houses[i] == 1) return true;
    }
    return false;
}


int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        houses.push_back(x);
    }

    cur_pos = 0 + m;
    nxt_pos = cur_pos + m + 1 + m;
    if (cur_pos >= n){
        if (CheckRangeInPerson(cur_pos)) wifi_cnt = 1;
    }
    else {
        while(cur_pos < n + m){
            if (CheckRangeInPerson(cur_pos)) wifi_cnt++;
            cur_pos = nxt_pos;
            nxt_pos = cur_pos + m + 1 + m;
        }
    }
    cout << wifi_cnt;
    return 0;
}