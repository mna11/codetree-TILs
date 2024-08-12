#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <tuple>

using namespace std;

int n, a, b, c, point, max_point(INT_MIN);
vector<tuple<int, int, int>> abc;
vector<int> check;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        abc.push_back(make_tuple(a, b, c));
    }
    for (int i = 1; i <= 3; i++){
        point = 0;
        for (int j = 0; j < n; j++){
            check.clear();
            check.resize(3, 0);
            tie(a, b, c) = abc[j];
            check[i] = 1;

            swap(check[a], check[b]);
            if (check[c] == 1) point++;
        }
        max_point = max(max_point, point);
    }
    cout << max_point;
    return 0;
}