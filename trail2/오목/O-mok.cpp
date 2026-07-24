#include <iostream>

using namespace std;

int iMatrix[19][19];

int main() {
    for (int i = 0; i < 19; ++i)
    {
        for (int j = 0; j < 19; ++j)
        {
            cin >> iMatrix[i][j];
        }
    }

    int iWhoWin(0);
    int iMy(0), iMx(0);

    for (int i = 0; i < 19; ++i)
    {
        bool bWin(false);
        for (int j = 0; j < 19; ++j)
        {
            int iWho = iMatrix[i][j];
            if (iWho == 0) continue;

            int iCnt(0);
            // 가로
            if (j < 16) {
                for (int x = j; x < j + 5; ++x) {
                    if (iWho == iMatrix[i][x]) ++iCnt;
                }
                if (iCnt == 5) {
                    bWin = true;
                    iMy = i;
                    iMx = j + 2;
                }
            }

            // 세로 
            if (i < 16) {
                iCnt = 0;
                for (int y = i; y < i + 5; ++y) {
                    if (iWho == iMatrix[y][j]) ++iCnt;
                }
                if (iCnt == 5) {
                    bWin = true;
                    iMy = i + 2;
                    iMx = j;
                }
            }

            // 대각선 1
            if (i < 16 && j < 16) {
                iCnt = 0;
                for (int xy = 0; xy < 5; ++xy) {
                    if (iWho == iMatrix[i + xy][j + xy]) ++iCnt;
                }
                if (iCnt == 5) {
                    bWin = true;
                    iMy = i + 2;
                    iMx = j + 2;
                }
            }

            // 대각선 2 
            if (i < 16 && j >= 5) {
                iCnt = 0;
                for (int xy = 0; xy < 5; ++xy) {
                    if (iWho == iMatrix[i + xy][j - xy]) ++iCnt;
                }
                if (iCnt == 5) {
                    bWin = true;
                    iMy = i + 2;
                    iMx = j - 2;
                }
            }

            if (bWin) {
                iWhoWin = iWho;
                break;
            }
        }
        if (bWin) break;
    }
    cout << iWhoWin << endl;
    if (iWhoWin != 0)
        cout << iMy + 1 << ' ' << iMx + 1 << endl;
    return 0;
}