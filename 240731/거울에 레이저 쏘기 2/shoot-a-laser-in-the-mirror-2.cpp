#include <iostream>
using namespace std;

bool InRange(int x, int y, int n){
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    int n, k, dir, x, y, bounce(0);
    char mirror;
    int mirror_room[1000][1000];
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    cin >> n;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++){
            cin >> mirror;
            if (mirror == '/') mirror_room[i][j] = 1;
            else mirror_room[i][j] = 2;
        }
    }
    cin >> k;
    dir = (k-1) / n; // S - 0, W - 1, N - 2, E - 3;
    if (dir == 0) {
        x = 0;
        y = n - (n - k) - 1;
    }
    else if (dir == 1) {
        x = n - (2 * n - k) - 1;
        y = n - 1;
    }
    else if (dir == 2) {
        x = n - 1;
        y = 3 * n - k;
    }
    else {
        x = 4 * n - k;
        y = 0;
    }

    while(InRange(x, y, n)){
        bounce++;
        if (mirror_room[x][y] == 1) {
            if (dir == 1 || dir == 3) dir = (dir + 3) % 4;
            else dir = (dir + 1) % 4;
        }
        else {
            if (dir == 0 || dir == 2) dir = (dir + 3) % 4;
            else dir = (dir + 1) % 4;
        }
        x = x + dx[dir];
        y = y + dy[dir];
    }

    cout << bounce;

    
    return 0;
}