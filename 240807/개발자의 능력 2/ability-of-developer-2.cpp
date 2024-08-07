#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> dev;
int max_diff(INT_MIN), min_diff(INT_MAX);

int main() {
    for (int i = 0; i < 6; i++){
        int ability;
        cin >> ability;
        dev.push_back(ability);
    }
    sort(dev.begin(), dev.end());
    for (int i = 0; i < 3; i++){
        int diff = dev[i] + dev[5-i];
        max_diff = max(max_diff, diff);
        min_diff = min(min_diff, diff);
    }
    cout << max_diff - min_diff;
    return 0;
}