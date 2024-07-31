#include <iostream>
#include <string>

using namespace std;

int main() {
    string statement;
    int x(0), y(0), dir_num(3), time(-1);
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};

    cin >> statement;
    for (int i = 0; i < statement.length(); i++){
        if (statement[i] == 'F') {
            x = x + dx[dir_num];
            y = y + dy[dir_num];
        }
        else dir_num = (dir_num + 1) % 4;

        if (x == 0 && y == 0) time = i + 1;
    }
    cout << time;
    return 0;
}