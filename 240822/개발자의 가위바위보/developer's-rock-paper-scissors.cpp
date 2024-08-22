#include <iostream>
#include <utility>
#include <tuple>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, a, b, win_cnt, max_win_cnt(INT_MIN);
vector<pair<int, int>> fight;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if (a == b) continue;
        fight.push_back(make_pair(a, b));
    }
    n = fight.size();


    for (int r = 1; r <= 3; r++){
        for (int p = 1; p <= 3; p++){
            for (int s = 1; s <= 3; s++){
                if (r == p || p == s || s == r) continue;

                for (int i = 0; i < n; i++){
                    tie(a, b) = fight[i];
                    if (a == r && b == s) win_cnt++;
                    else if (a == p && b == r) win_cnt++;
                    else if (a == s && b == p) win_cnt++;
                } 
                max_win_cnt = max(max_win_cnt, win_cnt);
                win_cnt = 0;
            }
        }
    }

    cout << max_win_cnt;

    return 0;
}