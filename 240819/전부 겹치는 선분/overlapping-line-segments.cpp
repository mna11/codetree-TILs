#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_NUMBER 100

using namespace std;

int n, x1, x2, max_x(INT_MIN);
bool check(true);

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> x2;
        max_x = max(max_x, x2);

        if (x1 > max_x) check = false;
        
    }
    if (check) cout << "Yes";
    else cout << "No";
    return 0;
}