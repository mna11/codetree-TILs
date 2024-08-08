#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> p;
int n, b, cnt, budget;

int main() {
    cin >> n >> b;
    for (int i = 0; i < n; i++){
        int cost;
        cin >> cost;
        p.push_back(cost);
    }

    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++){
        budget += p[i];
        if (budget - p[i] / 2 > b){
            cnt = i;
            break;
        }
        cnt = i + 1;
    }

    cout << cnt;
    return 0;
}