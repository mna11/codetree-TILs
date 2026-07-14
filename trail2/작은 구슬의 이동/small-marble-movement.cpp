#include <iostream>
using namespace std;

int GetDir(char _dir)
{
    switch(_dir)
    {
        case 'U':
            return 0;
        case 'R':
            return 1;
        case 'L':
            return 2;
        case 'D':
            return 3;
    }
}

bool InRange(int N, int x, int y)
{
    return (x > 0 && x <= N && y > 0 && y <= N);
}

int main() {
    int N(0), T(0);
    int cy(0), cx(0);
    char dir(0);

    int dx[4] = {0, 1, -1, 0};
    int dy[4] = {-1, 0, 0, 1};
    cin >> N >> T >> cy >> cx >> dir;

    int iDir = GetDir(dir);
    while(T--)
    {   
        int iTmpCx = cx + dx[iDir];
        int iTmpCy = cy + dy[iDir];
        
        if (InRange(N, iTmpCx, iTmpCy))
        {
            cx = iTmpCx;
            cy = iTmpCy;
        }
        else 
        {
            iDir = 3 - iDir;
        }
    }

    cout << cy << ' ' << cx;
    return 0;
}