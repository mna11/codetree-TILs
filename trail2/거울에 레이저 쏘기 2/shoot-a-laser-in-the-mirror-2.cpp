#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;

bool InRange(int n, int x, int y)
{
    return (x >= 0 && x < n && y >= 0 && y < n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;

    // Please write your code here.
    //  0
    // 3 1
    //  2

    // \ -> 0(1), 1(0), 2(3), 3(2);
    // / -> 0(3), 1(2), 2(1), 3(0);

    // idx - 어디로 들어왔냐
    // 현재 슬래쉬 위치 기준
    int r_dx[4] = { 1, 0, -1, 0 };
    int r_dy[4] = { 0, -1, 0, 1 };
    int s_dx[4] = { -1, 0, 1, 0 };
    int s_dy[4] = { 0, 1, 0, -1 };

    // dir

    // N = 3
    // 1 - 0 0, 0
    // 2 - 0 1, 0
    // 3 - 0 2, 0
    // 4 - 0 2, 1
    // 5 - 1 2, 1
    // 6 - 2 2, 1
    // 7 - 2 2, 2
    // 8 - 2 1, 2
    // 9 - 2 0, 2
    // 10 - 2 0, 3
    // 11 - 1 0, 3
    // 12 - 0 0, 3
    // dir = (k - 1) / N
    // cy cx | (dir % 2 == 0 && k <= N) -> (0, (k-1)%N)
    //       | (dir % 2 == 0 && k > N) -> (n-1, (N-1)-(k-1)%N);
    //       | (dir % 2 == 1 && k <= 2N) -> ((k-1)%N, n-1);
    //       | (dir % 2 == 1 && k > 2N) -> ((N-1)-(k-1)%N, 0);

    int cx(0), cy(0);
    int dir = (k - 1) / n;
    if (dir % 2 == 0) {
        if (k <= n) {
            cy = 0;
            cx = (k - 1) % n;
        }
        else {
            cy = n - 1;
            cx = (n - 1) - (k - 1) % n;
        }
    }
    else {
        if (k <= 2 * n) {
            cy = (k - 1) % n;
            cx = n - 1;
        }
        else {
            cy = (n - 1) - (k - 1) % n;
            cx = 0;
        }
    }

    int cnt(0);
    while (InRange(n, cx, cy))
    {
        cnt++;
        if (grid[cy][cx] == '\\') {
            cy += r_dy[dir];
            cx += r_dx[dir];
            dir = dir % 2 == 0 ? dir + 1 : dir - 1;
            dir = dir < 2 ? dir + 2 : dir - 2;
        }
        else {
            cy += s_dy[dir];
            cx += s_dx[dir];
            dir = 3 - dir;
            dir = dir < 2 ? dir + 2 : dir - 2;
        }
    }

    cout << cnt;
    return 0;
}