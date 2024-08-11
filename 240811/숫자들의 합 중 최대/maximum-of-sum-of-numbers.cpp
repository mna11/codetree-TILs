#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

vector<int> arr;
int x, y, max_sum(INT_MIN);

int main() {
    cin >> x >> y;
    for (int i = x; i <= y; i++){
        int sum(0);
        for (int j = i; j > 0; j/=10){
            sum += j % 10;
        }
        max_sum = max(max_sum, sum);
    }
    cout << max_sum;
    return 0;
}