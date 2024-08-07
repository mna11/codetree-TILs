#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    vector<int> dev;
    int total(0);
    int min_diff(INT_MAX);

    for (int i = 0; i < 5; i++){
        int ability;
        cin >> ability;
        total += ability;
        dev.push_back(ability);
    }

    for (int i1 = 0; i1 < 5; i1++){
        for (int i2 = i1 + 1; i2 < 6; i2++){

            for (int j = 0; j < 6; j++){
                if (i1 == j || i2 == j) continue;
                int sum1 = dev[i1] + dev[i2];
                int sum2 = dev[j];
                int sum3 = total - sum1 - sum2;
                int max_sum = max(max(sum1, sum2), sum3);
                int min_sum = min(min(sum1, sum2),sum3);
                if (max_sum - min_sum == 0) continue;

                min_diff = min(min_diff, max_sum - min_sum);
            }
        }
    }

    if (min_diff == INT_MAX) min_diff = -1;
    cout << min_diff;
    return 0;
}