#include <iostream>

using namespace std;

int n, ans;
int odd_cnt, even_cnt;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x % 2 == 0)
            even_cnt++;
        else
            odd_cnt++;
    }

    if (odd_cnt == 0) ans = 1;
    else {
        while(even_cnt > 0 && odd_cnt > 0){
            even_cnt--;
            odd_cnt--;
            ans += 2;
        }
        
        if (odd_cnt == 0){
            ans += 1;
        }
        else if (odd_cnt % 3 == 0){
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