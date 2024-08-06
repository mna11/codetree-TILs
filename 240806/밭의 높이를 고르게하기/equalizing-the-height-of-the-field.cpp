#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>

#define MAX_N 100

using namespace std;

int N, H, T;
vector<int> field;
int min_cost(INT_MAX), cost;

int main() {

    cin >> N >> H >> T;
    for (int i = 0; i < N; i++){
        int h;
        cin >> h;
        field.push_back(h);
    }

    for (int i = 0; i < MAX_N - T; i++){
        cost = 0;
        for (int j = i; j < i + T; j++){
            cost += abs(field[j] - H); 
        }
        min_cost = min(min_cost, cost);
    }

    cout << min_cost;
    return 0;
}