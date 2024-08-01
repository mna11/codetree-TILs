#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool InRange(int x, int y, int n){
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    vector<vector<int>> arr;
    int n, t, x, y, nx, ny, dir(3), result(0);
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    string statement;

    cin >> n >> t >> statement;
    arr.resize(n, vector<int>(n));
    x = y = n/2;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    result += arr[x][y];
    for (int i = 0; i < statement.length(); i++){
        if (statement[i] == 'R') dir = (dir + 1) % 4;
        else if (statement[i] == 'L') dir = (dir + 3) % 4;
        else { // statement[i] == 'F
            nx = x + dx[dir];
            ny = y + dy[dir];

            if (!InRange(nx, ny, n)) continue;
            x = x + dx[dir];
            y = y + dy[dir];
            result += arr[x][y];
        }
    }

    cout << result;
    return 0;
}