#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int n, a, b, result;

int main() {
    cin >> n;
    for (int i = 2; i <= pow(2, n-1); i*=2){
        cin >> a >> b;
        int c(0);
        if (a % i != 0) c = 1; 
        result = max(result, a/i + c);
    }
    cout << result;
    return 0;
}