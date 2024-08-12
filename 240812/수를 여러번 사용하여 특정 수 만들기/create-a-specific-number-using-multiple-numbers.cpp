#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int a, b, c;
int max_sum(INT_MIN), sum;

int main() {
    cin >> a >> b >> c;

    for (int i = 1; i <= 1000; i++){
        sum = 0;
        for (int j = 1; j <= 1000; j++){
            sum = a * i + b * j;
            if (sum <= c) max_sum = max(max_sum, sum);
        }
    }
    cout << max_sum;
    return 0;
}