#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;

    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    // Please write your code here.
    sort(P, P+N);
    int iMaxCnt(0);
    for (int i = 0; i < N; ++i) // 반값
    {
        int iCnt(0);
        int tB(B);
        for (int j = 0; j < N; ++j)
        {
            if (i == j)
            {   
                if (tB < P[j] / 2) break;
                tB -= P[j] / 2;
                ++iCnt;
                continue;
            }

            if (tB < P[j]) break;
            tB -= P[j];
            ++iCnt;
        }
        iMaxCnt = max(iMaxCnt, iCnt);
    }
    cout << iMaxCnt;
    return 0;
}