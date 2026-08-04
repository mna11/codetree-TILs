#include <iostream>

using namespace std;

int N;
int x1[100], x2[100];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    int iCnt(0); 
    for (int i = 0; i < N; ++i)
    {
        bool bS(true);
        for (int j = 0; j < N; ++j)
        {
            if (j == i) continue;

            if (x1[i] < x1[j] && x2[i] > x2[j])  bS = false;
            else if (x1[i] > x1[j] && x2[i] < x2[j]) bS = false;
        }
        if (bS) ++iCnt;
    }
    cout << iCnt;
    return 0;
}