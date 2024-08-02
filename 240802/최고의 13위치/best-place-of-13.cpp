#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;


int main() {
    vector<vector<int>> arr;
    int n, max_coin(INT_MIN);

    //init
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        for (int j = 0; j < n; j++){
            int x;
            cin >> x;
            tmp.push_back(x);
        }
        arr.push_back(tmp);
    }

    //solve
    for (int i = 0; i < n; i++){
        int coin(0);
        for (int j = 0; j < n - 2; j++){
            coin = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            max_coin = max(max_coin, coin);
        }
    }

    //result
    cout << max_coin;
    return 0;
}