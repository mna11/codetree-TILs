#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int grid[100][100] = {{0,},};
int n;

bool InRange(int r, int c){
    return (r >= 0 && r < n && c >= 0 && c < n);
}

bool checkComfortable(int r, int c){
    int cnt(0);
    for (int i = 0; i < 4; i++){
        int nr = r + dx[i]; int nc = c + dy[i];
        if (InRange(nr, nc) && grid[nr][nc] == 1) cnt++;
    }
    return cnt == 3;
}

int main() {
    int m;
    int r, c;

    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> r >> c;
        r--; c--;
        grid[r][c] = 1;
        cout << checkComfortable(r, c) << endl;
    }
    return 0;
}