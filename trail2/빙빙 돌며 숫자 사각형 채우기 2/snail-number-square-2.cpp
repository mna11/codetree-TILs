#include <iostream>
using namespace std;


bool InRange(int N, int M, int x, int y)
{
    return (x >= 0 && x < M && y >= 0 && y < N);
}

int main() {
    int N(0), M(0);
    int dy[4] = {1, 0, -1, 0};
    int dx[4] = {0, 1, 0, -1};
    int dir(0);
    int cx(0), cy(0);
    int iMatrix[100][100] = {{0,},};

    cin >> N >> M;

    int iTmpCx(0), iTmpCy(0);
    iMatrix[0][0] = 1;
    for (int i = 2; i <= N*M; ++i) {
        iTmpCx = cx + dx[dir];
        iTmpCy = cy + dy[dir];
        
        if ((!InRange(N, M, iTmpCx, iTmpCy))
        || 0 != iMatrix[iTmpCy][iTmpCx])
            dir = (dir + 1) % 4;
        
        cx += dx[dir];
        cy += dy[dir];

        iMatrix[cy][cx] = i;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cout << iMatrix[i][j] << ' ';  
        }
        cout << endl;
    }
    return 0;
}