#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_XY 100

using namespace std;

int n, x[MAX_XY + 1], y[MAX_XY + 1], min_cnt(INT_MAX);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    for (int parallel_x = 2; parallel_x <= MAX_XY; parallel_x += 2){
        for (int parallel_y = 2; parallel_y <= MAX_XY; parallel_y += 2){
            int plane_1(0), plane_2(0), plane_3(0), plane_4(0), max_plane_cnt;
            for (int i = 0; i < n; i++){
                if (x[i] > parallel_y  && y[i] > parallel_x) plane_1++;
                else if (x[i] < parallel_y && y[i] > parallel_x) plane_2++;
                else if (x[i] < parallel_y && y[i] < parallel_x) plane_3++;
                else if (x[i] > parallel_y && y[i] < parallel_x) plane_4++;
            }
            max_plane_cnt = max(max(max(plane_1, plane_2), plane_3), plane_4); 
            min_cnt = min(min_cnt, max_plane_cnt);
        }
    }
    cout << min_cnt;
    return 0;
}