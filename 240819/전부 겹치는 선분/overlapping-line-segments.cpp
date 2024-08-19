#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_NUMBER 100

using namespace std;

int n, x1, x2, min_x2(INT_MAX), max_x1(INT_MIN);
bool check(true);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> x2;
        min_x2 = min(min_x2, x2);
        max_x1 = max(max_x1, x1);
        if (max_x1 > min_x2) check = false; 
    }
    if (check) cout << "Yes";
    else cout << "No";
    return 0;
}