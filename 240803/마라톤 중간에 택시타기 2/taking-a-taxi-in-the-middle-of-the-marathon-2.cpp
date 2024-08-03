#include <iostream>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <tuple>

using namespace std;

int main() {
    int n, min_distance(INT_MAX), x, y, cur_x, cur_y;
    vector<tuple<int, int>> check_point;
    
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        tuple<int, int> tmp = make_tuple(x, y);
        check_point.push_back(tmp);
    }
    tie(cur_x, cur_y) = check_point[0];
    for (int i = 1; i < n - 1; i++){
        int sum_distance(0);
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            tie(x, y) = check_point[j];
            sum_distance += abs(cur_x - x) + abs(cur_y - y);
            cur_x = x;
            cur_y = y;
        }
        min_distance = min(min_distance, sum_distance);
    }
    cout << min_distance;
    return 0;
}