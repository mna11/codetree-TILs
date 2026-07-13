#include <iostream>
#include <map>
#include <utility>

using namespace std;

int n;
char dir[100];
int dist[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    // Please write your code here.
    map<char, int> m = {pair<char, int>('W', 0), pair<char, int>('S', 1), pair<char, int>('N', 2), pair<char, int>('E', 3)};
    int dx[4] = {-1, 0, 0, 1};
    int dy[4] = {0, -1, 1, 0};
    int x(0), y(0);
    for (int i = 0; i < n; ++i){
        x += dist[i] * dx[m[dir[i]]];
        y += dist[i] * dy[m[dir[i]]];
    }
    cout << x << ' ' << y << endl;

    return 0;
}