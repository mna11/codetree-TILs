#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int sit[MAX_N], min_dist(INT_MAX), ans(INT_MIN);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%1d", &sit[i]);

    for (int s1 = 0; s1 < n; s1++){
        if (sit[s1] == 1) continue;
        for (int s2 = s1 + 1; s2 < n; s2++){
            if (sit[s2] == 1) continue;

            sit[s1] = sit[s2] = 1;
            min_dist = INT_MAX;

            for (int i = 0; i < n; i++){
                if (sit[i] == 0) continue;
                for (int j = i + 1; j < n; j++){
                    if (str[j] == 0) continue;

                    if (sit[i] == 1 && sit[j] == 1){
                        int dist = j - i;
                        min_dist = min(min_dist, dist);
                        break;
                    }
                }
            }
           
            ans = max(ans, min_dist);
            sit[s1] = sit[s2] = 0;
        }
    }
    cout << ans;

    return 0;
}