#include <iostream>
using namespace std;

int GCD(int a, int b){
    if (b == 0) return a;
    
    int r = a % b;
    return GCD(b, r);
}

int LCM(int* arr, int lcm, int cur, int n){
    if (cur == n) return lcm;
    int gcd = GCD(lcm, arr[cur]);
    lcm = lcm * arr[cur] / gcd;
    return LCM(arr, lcm, cur+1, n);
}

int main() {
    int n, lcm(1);
    int* arr;

    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i ++)
        cin >> arr[i];
    cout << LCM(arr, lcm, 0, n);
    return 0;
}