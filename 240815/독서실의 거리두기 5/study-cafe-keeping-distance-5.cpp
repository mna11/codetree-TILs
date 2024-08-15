#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 20

using namespace std;

int sit[MAX_N + 1];
int n, max_distance(INT_MIN);

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) scanf("%1d", &sit[i]);
    for (int i = 1; i <= n; i++){
        if (sit[i] == 1) continue;

        int per_min_distance(INT_MAX), sit_pos;
        sit[i] = 1;
        for (int j = 1; j <= n; j++){
            for (int k = j + 1; k <= n; k++){
                if (sit[j] == 1 && sit[k] == 1) {
                    per_min_distance = min(per_min_distance, k-j);
                    break;
                }
            }
        }
        sit[i] = 0;
        max_distance = max(max_distance, per_min_distance);
    }
    cout << max_distance;
    return 0;
}