#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>

using namespace std;

vector<vector<int>> dots;
int n, x, y, area, max_area(INT_MIN);

int ReturnTriangleArea(int a, int b, int c){
    int center, center_same_x_point, center_same_y_point;
    if (dots[a][0] == dots[b][0] && dots[a][1] == dots[c][1]) {
        center = a;
        center_same_x_point = b;
        center_same_y_point = c;
    }
    else if (dots[a][0] == dots[c][0] && dots[a][1] == dots[b][1]) {
        center = a;
        center_same_x_point = c;
        center_same_y_point = b;
    }
    else if (dots[b][0] == dots[a][0] && dots[b][1] == dots[c][1]){
        center = b;
        center_same_x_point = a;
        center_same_y_point = c;
    }
    else if (dots[b][0] == dots[c][0] && dots[b][1] == dots[a][1]){
        center = b;
        center_same_x_point = c;
        center_same_y_point = a;
    }
    else if (dots[c][0] == dots[a][0] && dots[c][1] == dots[b][1]){
        center = c;
        center_same_x_point = a;
        center_same_y_point = b;
    }
    else if (dots[c][0] == dots[b][0] && dots[c][1] == dots[a][1]){
        center = c;
        center_same_x_point = b;
        center_same_y_point = a;
    }
    else return -1;
    
    return abs(dots[center][0] - dots[center_same_y_point][0]) * abs(dots[center][1] - dots[center_same_x_point][1]);
}


int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        cin >> x >> y;
        tmp.push_back(x);
        tmp.push_back(y);
        dots.push_back(tmp);
    }

    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                area = ReturnTriangleArea(i, j, k);
                if (area == -1) continue;
                max_area = max(max_area, area);
            }
        }
    }
    if (max_area == INT_MIN) max_area = 0;
    cout << max_area;
    return 0;
}