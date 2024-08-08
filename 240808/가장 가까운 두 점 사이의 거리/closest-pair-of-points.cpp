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
    
    int x1, x2, y1, y2, min_distance(INT_MAX);
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            int distance = abs(dots[i][0] - dots[j][0]) + abs(dots[i][1] - dots[j][1]);
            if (min_distance > distance) {
                min_distance = distance;
                x1 = dots[i][0];
                y1 = dots[i][1];
                x2 = dots[j][0];
                y2 = dots[j][0];
            }
        }
    }
    cout << (x1 - x2) * (x1 - x2) + (y1-y2) * (y1-y2);
    return 0;
}