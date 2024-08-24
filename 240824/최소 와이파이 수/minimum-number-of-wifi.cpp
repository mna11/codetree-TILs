#include <iostream>
#include <vector>

using namespace std;

int n, m, wifi_cnt;
vector<int> houses;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        houses.push_back(x);
    }

    for (int i = 0; i < n; i++){
        if (houses[i] == 1){
            wifi_cnt++;
            i += m + m;
        }
    }
    cout << wifi_cnt;
    return 0;
}