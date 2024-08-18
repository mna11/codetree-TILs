#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

#define MAX_N 1000

using namespace std;

int n, cost, min_cost(INT_MAX), min_hill, max_hill;
int hill[MAX_N];
int tmp[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> hill[i];
    sort(hill, hill + n);
    min_hill = hill[0];
    max_hill = hill[0] + 17;

    while(max_hill <= hill[n-1]){
        cost = 0;
        for (int i = 0; i < n; i++){
            if (hill[i] >= min_hill && hill[i] <= max_hill) continue;
            if (abs(hill[i] - min_hill) < abs(hill[i] - max_hill)) {
                cost += abs(hill[i] - min_hill) * abs(hill[i] - min_hill);
            }
            else {
                cost += abs(hill[i] - max_hill) * abs(hill[i] - max_hill);
            }
        }
        min_cost = min(min_cost, cost);
        min_hill++;
        max_hill++;
    }

    cout << min_cost;
    

    return 0;
}