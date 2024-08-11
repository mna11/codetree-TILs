#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int max_cnt(INT_MIN);
vector<int> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int k = 1; k <= 100; k++){
        for (int i = 0; i < n - 1; i++){ // k의 위치: arr의 각 인덱스의 사이에 위치 
            int cnt(0), differ = k - arr[i]; 
            for (int j = 0; j < n - 1; j++){ // arr의 인덱스
                if (i == j) cnt++;
                else if (i == j + 1) {
                    if(arr[j + 1] - k == differ) cnt++;
                }
                else {
                    if (arr[j + 1] - arr[j] == differ) cnt++;
                }
            }
            max_cnt = max(max_cnt, cnt);
        }
    }
    cout << max_cnt;
    return 0;
}