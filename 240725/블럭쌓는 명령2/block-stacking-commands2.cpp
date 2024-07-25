#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n, k;
    int a, b;

    int result[100] = {0,};
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> a >> b;
        for (int i = a-1; i <= b-1; i++) result[i]++;
    }
    sort(result, result + n, greater<int>());
    cout << result[0];
    return 0;
}