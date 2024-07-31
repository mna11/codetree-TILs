#include <iostream>
using namespace std;

int convertDir(char dir){
    if (dir == 'N') return 3;
    if (dir == 'E') return 0;
    if (dir == 'S') return 1;
    if (dir == 'W') return 2;
}

int main() {
    int n, s, time(0);
    char dir;
    int dir_num;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    int x(0), y(0);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> dir >> s;
        dir_num = convertDir(dir);
        for (int j = 0; j < s; j++) {
            time++;
            x = x + dx[dir_num];
            y = y + dy[dir_num];
            if (x == 0 && y == 0) {
                break;
            }
        }
        if (x == 0 && y == 0) {
            break;
        }
    }

    if (x == 0 && y == 0) cout << time;
    else cout << -1;

    return 0;
}