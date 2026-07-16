#include <iostream>
using namespace std;

bool InRange(int N, int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < N);
}

//
// 1 1 2 2 3 3 4 4 5 5 6 6
// 2 4 6 8 10 

int main(void) {
    int N(0);
    int dx[4] = { 1, 0 , -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };
    int dir(0);

    int cnt(0);
    int max_cur_cnt(1);
    int iMatrix[100][100];

    cin >> N;

    int iTmpCx(0), iTmpCy(0);
    int cx(N / 2), cy(N / 2);
    iMatrix[cy][cx] = 1;
    for (int i = 2; i <= N * N; ++i) {
        iTmpCx = cx + dx[dir];
        iTmpCy = cy + dy[dir];

        if ((!InRange(N, iTmpCx, iTmpCy)) || cnt == max_cur_cnt) {
            dir = (dir + 1) % 4;
            if (0 == dir || 2 == dir) max_cur_cnt++;
            cnt = 0;
        }

        cx += dx[dir];
        cy += dy[dir];
        iMatrix[cy][cx] = i;
        ++cnt;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << iMatrix[i][j] << '\t';
        }
        cout << endl;
    }

    return 0;
}