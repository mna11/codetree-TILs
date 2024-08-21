#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int A, B, x, y;
int case1, case2, case3;

int main() {
    cin >> A >> B >> x >> y;
    case1 = abs(B - A);
    case2 = abs(x - A) + abs(y - B);
    case3 = abs(y - A) + abs(x - B);
    
    cout << min(case1, min(case2, case3));
    return 0;
}