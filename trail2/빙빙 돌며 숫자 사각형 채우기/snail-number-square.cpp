#include <iostream>

using namespace std;

bool InRange(int N, int M, int x, int y)
{
    return (x >= 0 && x < M && y >= 0 && y < N);
}

int main(void)
{  
    int Matrix[100][100] = {{0,},};
    int N, M;
    int cx(0), cy(0);
    int dir(0);
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    cin >> N >> M;

    Matrix[cy][cx] = 1;

    for (int i = 2; i <= N * M; ++i){
        int iTmpCx = cx + dx[dir];
        int iTmpCy = cy + dy[dir];

        if (!InRange(N, M, iTmpCx, iTmpCy) || !(Matrix[iTmpCy][iTmpCx] == 0))
            dir = (dir + 1) % 4;
        
        cx += dx[dir];
        cy += dy[dir];

        Matrix[cy][cx] = i;
    }

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cout << Matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0; 
}