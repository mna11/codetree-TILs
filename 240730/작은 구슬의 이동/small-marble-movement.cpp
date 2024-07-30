#include <iostream>
#include <cmath>

using namespace std;

int GetDirection(char d){
    if (d == 'U') return 2;
    if (d == 'D') return 1;
    if (d == 'R') return 0;
    if (d == 'L') return 3;
}

bool InRange(int x, int y, int n){
    return (x > 0 && x < n && y > 0 && y < n);
}


int main() {
    int n, t, r, c;
    char d;
    int direction;
    int dr[4] = {0, 1, -1, 0};
    int dc[4] = {1, 0, 0, -1};

    int nr, nc;
    cin >> n >> t;
    cin >> r >> c >> d;

    direction = GetDirection(d);
    for (int i = 0; i < t; i++){
        nr = r + dr[direction];
        nc = c + dc[direction];
        if (InRange(nr, nc, n)){
            r = nr;
            c = nc;
        }
        else {
            direction = abs(3 - direction);
        }
    }
    cout << r << " " << c;
    return 0;
}