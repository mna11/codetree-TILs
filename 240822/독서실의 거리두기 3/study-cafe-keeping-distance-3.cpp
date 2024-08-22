#include <iostream>
#include <climits>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n, dist, max_dist(INT_MIN), min_dist(INT_MAX), seat_add_index;
int seat[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%1d", &seat[i]);

    for (int i = 0; i < n; i++){
        if (seat[i] == 0) continue;
        for (int j = i + 1; j < n; j++){
            if (seat[j] == 0) continue;

            if (seat[i] == 1 && seat[j] == 1){
                dist = j - i;
                if (max_dist < dist){
                    max_dist = dist;
                    seat_add_index = (i + j) / 2;
                }
                break;
            }
        }
    }
    seat[seat_add_index] = 1;
    
    for (int i = 0; i < n; i++){
        if (seat[i] == 0) continue;
        for (int j = i + 1; j < n; j++){
            if (seat[j] == 0) continue;

            if (seat[i] == 1 && seat[j] == 1){
                dist = j - i;
                min_dist = min(min_dist, dist);
                break;
            }
        }
    }

    cout << min_dist;
    return 0;
}