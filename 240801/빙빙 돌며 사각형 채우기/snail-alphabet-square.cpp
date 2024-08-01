#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m){
    return (x >= 0 && x < n && y >= 0 && y < m);
}

int main() {
    int n, m, x(0), y(0), nx, ny, dir(0);
    int arr[100][100] = {{0,},};
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    arr[x][y] = 'A';
    cin >> n >> m;
    for (int i = 1; i < n * m; i++){
        nx = x + dx[dir];
        ny = y + dy[dir];
        if (!InRange(nx, ny, n, m) || arr[nx][ny] != 0) dir = (dir + 1) % 4;

        x = x + dx[dir];
        y = y + dy[dir];
        arr[x][y] = 'A' + i <= 'Z' ? 'A' + i : 'A' + i % 26;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << (char)arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}