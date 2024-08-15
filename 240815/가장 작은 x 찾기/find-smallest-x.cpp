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
        a /= i;
        if (a % i != 0) a++;
        result = max(result, a);
    }
    cout << result;
    return 0;
}