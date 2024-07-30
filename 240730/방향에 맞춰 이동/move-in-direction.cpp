#include <iostream>
using namespace std;

int main() {
    int n, distance;
    char dir;
    int x(0), y(0);
    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, -1, 0, 1};

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> dir >> distance;
        if (dir == 'E'){
            x += dx[0] * distance;
            y += dy[0] * distance;
        }
        else if (dir == 'S'){
            x += dx[1] * distance;
            y += dy[1] * distance;
        }
        else if (dir == 'W'){
            x += dx[2] * distance;
            y += dy[2] * distance;
        }
        else if (dir == 'N'){
            x += dx[3] * distance;
            y += dy[3] * distance;
        }
    }
    cout << x << " " << y; 
    return 0;
}