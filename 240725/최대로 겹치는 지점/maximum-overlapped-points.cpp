#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n;
    int x1, x2;
    int result[101] = {0,};

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> x2;
        for (int j = x1; j <= x2; j++) result[j]++;
    }
    sort(result, result + 101, greater<int>());
    cout << result[0];
    return 0;
}