#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int a, b, c;

int Func(int sum){
    if (sum + a > c && sum + b <= c) return Func(sum + b);
    if (sum + a <= c && sum + b > c) return Func(sum + a); 
    if (sum + a > c && sum + b > c) return sum;
    return max(Func(sum + a), Func(sum + b));
}


int main() {
    cin >> a >> b >> c;
    cout << Func(0);
    return 0;
}