#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n, k, p, people[100];
char alpha;
int max_sum(INT_MIN), max_pos(0);


int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> p >> alpha;
        max_pos = max(max_pos, p);
        people[p] = alpha - 'F';
    }

    for (int i = 1; i <= max_pos - k + 1; i++){
        int sum(0);
        for (int j = i; j <= i + k; j++) sum+=people[j];
        max_sum = max(max_sum, sum);
    }

    cout << max_sum;
    return 0;
}