#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int number_line[3];
int max_dist(INT_MIN);

int main() {
    for (int i = 0; i < 3; i++) cin >> number_line[i];
    sort(number_line, number_line + 3);
    max_dist = max(number_line[1] - number_line[0], number_line[2] - number_line[1]);
    cout << max_dist - 1;
    return 0;
}