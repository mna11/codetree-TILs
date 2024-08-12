#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int a, b, c;

int Func(int sum){
    if (sum > c) {
        if (sum - a <= c) return sum - a;
        if (sum - b <= c) return sum - b;
    }
    return max(Func(sum + a), Func(sum + b));
}


int main() {
    cin >> a >> b >> c;
    cout << Func(0);
    return 0;
}