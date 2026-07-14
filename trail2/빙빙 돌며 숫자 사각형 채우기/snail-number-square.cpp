#include <iostream>
using namespace std;

bool InRange(int N, int M, int x, int y)
{
    return (x >= 0 && x < M && y >= 0 && y < N);
}

int main() {
    // Please write your code here.
    int N(0), M(0);
    int Matrix[100][100] = {{0,},};
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1}; 
    int dir(0);
    int cnt(1); 

    cin >> N >> M;


    int cx(0), cy(0);
    Matrix[cy][cx] = cnt++;
    for (int y = 0; y < N; ++y)
    {
        for (int x = 0; x < M; ++x)
        {
            if (cnt > N * M) break;

            int iTmpCx = cx + dx[dir];
            int iTmpCy = cy + dy[dir]; 

            if (!InRange(N, M, iTmpCx, iTmpCy) || !(Matrix[iTmpCy][iTmpCx] == 0))
                dir = (dir + 1) % 4;
            
            cx = cx + dx[dir];
            cy = cy + dy[dir];
            Matrix[cy][cx] = cnt++;
        }
        
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