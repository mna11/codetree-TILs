#include <iostream>
#include <string>

using namespace std;

int N, M;
string arr[50];

bool InRange(int x, int y) 
{
    return (x >= 0 && x < M && y >= 0 && y < N);
}

int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.

    int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

    int iCnt(0);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if ('L' != arr[i][j]) continue;
            
            for (int iDir = 0; iDir < 8; ++iDir)
            {
                if (!InRange(j + dx[iDir] * 2, i + dy[iDir] * 2)) continue;
                if ('E' == arr[i + dy[iDir]][j + dx[iDir]]
                    && 'E' == arr[i + dy[iDir] * 2][j + dx[iDir] * 2])
                    ++iCnt;
            }

        }
    }
    cout << iCnt << endl;
    return 0;
}