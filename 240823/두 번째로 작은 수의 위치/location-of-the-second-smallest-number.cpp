#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <climits>

#define MAX_N 100
using namespace std;

int n, ans;
vector<int> arr;
vector<int> sort_arr;
array<int, MAX_N> size_index_arr;

int main() {
    ans = -1;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    sort_arr = arr;
    sort(sort_arr.begin(), sort_arr.end());
    unique(sort_arr.begin(), sort_arr.end());
    for (int i = 0; i < sort_arr.size(); i++){
        for (int j = 0; j < n; j++){
            if (sort_arr[i] == arr[j] && size_index_arr[j] == 0) size_index_arr[j] = i + 1;
        }
    }
    
    for (int i = 0; i < n; i++){
        if (size_index_arr[i] == 2) {
            if (ans != -1) {
                ans = -1;
                break;
            }
            else ans = i + 1;
        }
    }
    cout << ans;
    return 0;
}