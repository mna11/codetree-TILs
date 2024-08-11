#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

#define MAX_X 1000


using namespace std;


char line[MAX_X + 1];
int t, a, b, cnt;

int main() {
    cin >> t >> a >> b;
    for (int i = 0; i < t; i++){
        char alphar;
        int x;
        cin >> alphar >> x;
        line[x] = alphar;
    }

    for (int i = a; i <= b; i++){
        int d1(INT_MAX), d2(INT_MAX);
        for (int j = 0; j <= 1000; j++){
            if (d1 < j - i || d2 < j - i) break;
            if (line[j] == 'S') d1 = min(d1, abs(i-j));
            else if (line[j] == 'N') d2 = min(d2, abs(i-j));
        }
        if (d1 <= d2) cnt++;
    }

    cout << cnt;
    return 0;
}