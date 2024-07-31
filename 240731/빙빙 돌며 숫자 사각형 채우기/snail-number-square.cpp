#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m){
    return (x >= 0 && x < n && y >= 0 && y < m);
}


int main() {
    int n, m, cnt(2);
    int answer[100][100] = {{0,},};
    int dx[4] = {0, 1, 0, -1}; int dy[4] = {1, 0, -1, 0};
    int x(0), y(0), nx, ny, dir(0);

    answer[0][0] = 1;

    cin >> n >> m;
    for (cnt; cnt <= n * m; cnt++){
        nx = x + dx[dir];
        ny = y + dy[dir];

        if (!InRange(nx, ny, n, m) || answer[nx][ny] != 0)
            dir = (dir + 1) % 4;

        x = x + dx[dir];
        y = y + dy[dir];
        answer[x][y] = cnt;
    }

    for (int x = 0; x < n; x++){
        for (int y = 0; y < m; y++){
            cout << answer[x][y] << " ";
        }
        cout << endl;
    }

    return 0;
}