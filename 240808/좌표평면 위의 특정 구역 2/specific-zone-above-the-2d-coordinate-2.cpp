#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

vector<vector<int>> dots;
int n, x, y, min_square_area(INT_MAX);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        vector<int> tmp;
        tmp.push_back(x);
        tmp.push_back(y);
        dots.push_back(tmp);
    }

    for (int i = 0; i < n; i++){
        int square_area(0), max_x(INT_MIN), max_y(INT_MIN), min_x(INT_MAX), min_y(INT_MAX);
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            max_x = max(max_x, dots[j][0]);
            max_y = max(max_y, dots[j][1]);
            min_x = min(min_x, dots[j][0]);
            min_y = min(min_y, dots[j][1]);
        }
        square_area = ( max_x - min_x ) * (max_y - min_y);
        min_square_area = min(min_square_area, square_area);
    }

    cout << min_square_area;
    return 0;
}