#include <iostream>
#include <vector>
#include <algorithm>

#define MAX_H 100

using namespace std;

int n, l, ans;
vector<int> arr;

int main() {
    cin >> n >> l;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());

    for (int h = 0; h <= MAX_H; h++){
        int h_cnt(0);
        for (int i = 0; i < n; i++){
            if (arr[i] >= h) {
                h_cnt = n - i;
            }
            
            if (h_cnt < h){
                if (i >= l){
                    for (int j = 1; j <= l; j++){
                        if (arr[i - j] + 1 >= h) h_cnt++;
                    }
                }
            }

            if (h_cnt >= h) ans = h;
        }
    }
    cout << ans;
    return 0;
}