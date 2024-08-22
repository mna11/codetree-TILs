#include <iostream>
#include <algorithm>

#define MAX_N 26
using namespace std;

int n, cnt;
int line[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        char alphar;
        cin >> alphar;
        line[i] = alphar;
    }
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (line[i] > line[j]) {
                swap(line[i], line[j]);
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}