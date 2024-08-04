#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int N, S, min_gap(INT_MAX);
vector<int> arr;

int SumArrExceptNum(int x, int y){
    int sum(0);
    for (int i = 0; i < N; i++){
        if (i == x || i == y) continue;
        sum += arr[i];
    }
    return sum;
}

int GapSumBtwS(int x, int y){
    int sum = SumArrExceptNum(x, y);
    return abs(S - sum);
}

int main() {
    cin >> N >> S;
    for (int i = 0; i < N; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            min_gap = min(min_gap, GapSumBtwS(i, j));
        }
    }
    cout << min_gap;
    return 0;
}