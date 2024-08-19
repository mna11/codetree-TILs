#include <iostream>
#include <algorithm>
#include <functional>

#define MAX_NUMBER 100

using namespace std;

int n, x1, x2;
int line[MAX_NUMBER + 1] = {0,};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x1 >> x2;
        for (int j = x1; j <= x2; j++){
            line[j]++;
        }
    }
    sort(line, line + MAX_NUMBER + 1, greater<int>());
    if (line[0] == n) cout << "Yes";
    else cout << "No";

    return 0;
}