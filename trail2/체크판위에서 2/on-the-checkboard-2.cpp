#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;

vector<vector<char>> v;
int R, C;

int Func(int cx, int cy, int iDepth)
{
    if (cx == C - 1 && cy == R - 1)
    {
        return iDepth == 3 ? 1 : 0;
    }

    if (iDepth == 3) return 0;

    int iResult(0);

    for (int y = cy + 1; y < R; ++y)
    {
        for (int x = cx + 1; x < C; ++x)
        {
            if (v[cy][cx] != v[y][x])
                iResult += Func(x, y, iDepth + 1);
        }
    }

    return iResult;
}

int main() {
    cin >> R >> C;
    v.resize(R, vector<char>(C));

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> v[i][j];
        }
    }

    int iResult(0);
    for (int i = 1; i < R; ++i)
    {
        for (int j = 1; j < C; ++j)
        {
            if (v[0][0] != v[i][j])
            {
                iResult += Func(j, i, 1);
            }
        }
    }

    cout << iResult;
    return 0;
}