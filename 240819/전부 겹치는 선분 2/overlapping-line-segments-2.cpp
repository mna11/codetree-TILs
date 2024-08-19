#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N]; 
int min_x2(INT_MAX), max_x1(INT_MIN);
int is_that_all_overlap(true), can_overlap(false);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x1[i] >> x2[i];
    for (int i = 0; i < n; i++){
        min_x2 = INT_MAX;
        max_x1 = INT_MIN;
        is_that_all_overlap = true;
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            max_x1 = max(max_x1, x1[j]);
            min_x2 = min(min_x2, x2[j]);
            if (max_x1 > min_x2) is_that_all_overlap = false;
        }
        if(is_that_all_overlap) can_overlap = true;
    }
    if (can_overlap) cout << "Yes";
    else cout << "No";

    return 0;
}