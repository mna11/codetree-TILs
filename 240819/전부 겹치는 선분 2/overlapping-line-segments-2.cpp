#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n;
int x1, x2, min_x2, max_x1, out_range(0);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> x2;
        int tmp_max_x1 = max(max_x1, x1);
        int tmp_min_x2 = min(min_x2, x2);
        if (tmp_max_x1 < tmp_min_x2) out_range++;
        else {
            max_x1 = tmp_max_x1;
            min_x2 = tmp_min_x2;
        }
    }
    if (out_range <= 1) cout << "Yes";
    else cout << "No";
    return 0;
}