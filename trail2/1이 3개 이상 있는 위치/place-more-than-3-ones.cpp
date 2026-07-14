#include <iostream>
using namespace std;

bool InRange(int N, int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < N);
}

int main() {
    // Please write your code here.
    int N(0);
    int Matrix[100][100];
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cin >> Matrix[i][j];
        }
    }

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, -1, 0, 1};

    int cnt(0), result(0);
    for (int y = 0; y < N; ++y)
    {
        for (int x = 0; x < N; ++x)
        {
            for (int i = 0; i < 4; ++i){
                int cx = x + dx[i];
                int cy = y + dy[i];
                if (InRange(N, cx, cy) && Matrix[cy][cx] == 1)
                    ++cnt; 
            }   
            if (cnt >= 3) ++result;
            cnt = 0;
        }
    }
    cout << result;
    return 0;
}