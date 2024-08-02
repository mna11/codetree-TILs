#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int min_distance(INT_MAX);
    int n;
    vector<int> arr;

    cin >> n;
    for (int i = 0; i < n; i++){
        int Ai;
        cin >> Ai;
        arr.push_back(Ai);
    }

    for (int house = 0; house < n; house++){
        int sum_distance(0);
        for (int i = 0; i < n; i++){
            sum_distance += abs(house - i) * arr[i];
        }
        min_distance = min(min_distance, sum_distance);
    }

    cout << min_distance;

    return 0;
}