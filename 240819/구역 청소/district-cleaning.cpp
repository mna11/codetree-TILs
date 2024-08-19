#include <iostream>
#include <algorithm>

using namespace std;

int a, b, c, d, ans;

int main() {
    cin >> a >> b >> c >> d;
    if (b < c){
        ans += b - a;
        ans += d - c;
    }
    else if (d < a){
        ans += b - a;
        ans += d - c;
    }
    else {
        ans = max(a, max(b, max(c, d))) - min(a, min(b, min(c, d)));
    }
    cout << ans;
    return 0;
}