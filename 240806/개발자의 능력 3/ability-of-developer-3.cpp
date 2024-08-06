#include <iostream>
#include <cmath>
#include <climits>
#include <vector>

#define NUM 6

using namespace std;

int main() {
    vector<int> dev;
    int sum_ability(0), diff, min_diff(INT_MAX);

    for (int i = 0; i < NUM; i++){
        int ability;
        cin >> ability;
        dev.push_back(ability);
        sum_ability += ability;
    }

    for (int i = 0; i < NUM - 2; i++){
        for (int j = i + 1; j < NUM - 1; j++){
            for (int k = j + 1; k < NUM; k++){
                int sum_A = dev[i] + dev[j] + dev[k];
                int sum_B = sum_ability - sum_A;

                diff = abs(sum_A - sum_B);
                min_diff = min(min_diff, diff);
            }
        }
    }
    
    cout << min_diff;

    return 0;
}