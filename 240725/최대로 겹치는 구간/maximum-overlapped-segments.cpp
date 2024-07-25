#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n, x1, x2, offset(100);
    int result[201] = {0,};

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> x2;
        x1 += offset; 
        x2 += offset;
        for (int k = x1; k < x2; k++) {
            result[k]++;
        }
    }
    sort(result, result + 201, greater<int>());
    cout << result[0];
    return 0;
}