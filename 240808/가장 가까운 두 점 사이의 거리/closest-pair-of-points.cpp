#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

vector<vector<int>> dots;
int n, x, y;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        cin >> x >> y;
        tmp.push_back(x);
        tmp.push_back(y);
        dots.push_back(tmp);
    }
    
    int x1, x2, y1, y2, min_distance_pow(INT_MAX);
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            x1 = dots[i][0];
            y1 = dots[i][1];
            x2 = dots[j][0];
            y2 = dots[j][1];
            int distance_pow = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
            min_distance_pow = min(min_distance_pow, distance_pow);
        }
    }
    cout << min_distance_pow;
    return 0;
}