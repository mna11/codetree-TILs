#include <iostream>
using namespace std;

int main() {
    int n, m, k, result(-1);
    int count[10001] = {0,};

    cin >> n >> m >> k;
    for (int i = 0; i < m; i++){
        cin >> n;
        count[n]++;
        if (count[n] == k) result = n;
    }
    cout << result;
    return 0;
}