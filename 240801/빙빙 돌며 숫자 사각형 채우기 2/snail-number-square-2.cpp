#include <iostream>
using namespace std;

bool InRange(int x, int y, int n, int m){
    return (x >= 0 && x < n && y >=0 && y < m);
}

int main() {
    int n, m, x(0), y(0), dir(1);
    int arr[100][100];
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    arr[0][0] = 1;

    cin >> n >> m;
    for (int i = 2; i <= n * m; i++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (!InRange(nx, ny, n, m) || arr[nx][ny] != 0) dir = (dir + 3) % 4;
        x = x + dx[dir];
        y = y + dy[dir];

        arr[x][y] = i;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}