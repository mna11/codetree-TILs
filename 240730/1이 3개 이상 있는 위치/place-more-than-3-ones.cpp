#include <iostream>
using namespace std;

bool InRange(int x, int y, int n){
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    int place[100][100]; 
    int n, result(0);
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) cin >> place[i][j];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int cnt(0);
            for (int k = 0; k < 4; k++){
                int nx = i + dx[k];
                int ny = j + dy[k];
                if (InRange(nx, ny, n) && place[nx][ny] == 1) cnt++;
            }
            if (cnt >=3) result++;
        }
    }

    cout << result;
    return 0;
}