#include <iostream>
#include <string>

using namespace std;

#define E 0
#define S 1
#define W 2
#define N 3

int main() {
    int x(0), y(0), dir(N);
    int n;
    string statement;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    cin >> statement;
    for (int i = 0; i < statement.length(); i++){
        if (statement[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
        else if (statement[i] == 'L'){
            dir = (dir - 1 + 4) % 4;
        }
        else {
            dir = (dir + 1) % 4;
        }
    }

    cout << x << " " << y;
    return 0;
}