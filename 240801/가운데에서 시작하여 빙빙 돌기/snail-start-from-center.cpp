#include <iostream>
using namespace std;

int main() {
    int n, x, y, nx, ny, dir(0), distance(1);
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int arr[100][100] = {{0,},};

    cin >> n;
    x = y = n / 2;
    arr[x][y] = 1;

    for (int i = 2; i <= n*n;){
        for (int k = 0; k < 2; k++){
            for (int j = 0; j < distance; j++){
                x = x + dx[dir];
                y = y + dy[dir];
                arr[x][y] = i++;
            }
            dir = (dir + 3) % 4;
        }
        distance++;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}