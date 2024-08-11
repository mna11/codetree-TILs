#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, max_h(INT_MIN), max_cnt(INT_MIN);
vector<int> iceberg;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        int h;
        cin >> h;
        max_h = max(max_h, h);
        iceberg.push_back(h);
    }

    for (int i = 0; i <= max_h; i++){
        vector<int> tmp(iceberg);
        int cnt(0);

        for (int j = 0; j < n; j++) tmp[j] -= i;
        for (int j = 0; j < n; j++){
            if (tmp[j] >= 0 && j == 0) cnt++;
            if (tmp[j] >= 0 && tmp[j-1] == 0) cnt++;
        }
        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt;

    return 0;
}