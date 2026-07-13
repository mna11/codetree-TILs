#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    int dir = 3;
    int cx(0), cy(0);
    for (char c : str) {
        switch(c)
        {
            case 'L':  
                dir = (dir - 1 + 4) % 4;
                break;
            case 'R':
                dir = (dir + 1) % 4;
                break;
            case 'F':
                cx += dx[dir];
                cy += dy[dir];
                break;
            default :
                break;
        }
    }
    cout << cx << ' ' << cy << endl;
    return 0;
}