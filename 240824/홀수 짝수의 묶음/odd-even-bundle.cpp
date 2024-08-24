#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans;
int odd_cnt, even_cnt;
vector<int> odd_arr;
vector<int> even_arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x % 2 == 0)
            even_arr.push_back(x);
        else
            odd_arr.push_back(x);
    }

    odd_cnt = odd_arr.size();
    even_cnt = even_arr.size();

    if (odd_cnt == 0) ans = 1;
    else {
        while(even_cnt > 0){
            even_cnt--;
            odd_cnt--;
            ans += 2;
        }

        if (odd_cnt % 3 == 0){
            ans += odd_cnt / 3 * 2;
        }
        else if (odd_cnt % 3 == 1){
            ans += odd_cnt / 3 * 2 - 1;
        }
        else if (odd_cnt % 3 == 2){
            ans += odd_cnt / 3 * 2 + 1;
        }
    }


    cout << ans;
    return 0;
}