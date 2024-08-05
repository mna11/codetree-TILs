#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n, k, p, people[10001] = {0,};
char alpha;
int max_sum(INT_MIN);


int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> p >> alpha;
        people[p] = alpha - 'F';
    }

    for (int i = 1; i <= 10000 - k; i++){
        int sum(0);
        for (int j = i; j <= i + k; j++) {
            sum += people[j];
        }
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}