#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
char d[1000];
int ta[1000];
char d2[1000];
int ta2[1000];
int A[1000001];
int B[1000001];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) cin >> d[i] >> ta[i];

    for (int i = 0; i < m; i++) cin >> d2[i] >> ta2[i];

    // Please write your code here.
    int iACurTime(1);
    A[0] = B[0] = 0;
    for (int i = 0; i < n; ++i) {
        for (int t = iACurTime; t < iACurTime + ta[i]; ++t) {
            if (d[i] == 'R') {
                A[t] = A[t-1]+1;
            }
            else {
                A[t] = A[t-1]-1;
            }
        }
        iACurTime += ta[i];
    }

    int iBCurTime = 1;
    for (int i = 0; i < m; ++i) {
        for (int t = iBCurTime; t < iBCurTime + ta2[i]; ++t) {
            if (d2[i] == 'R') {
                B[t] = B[t-1]+1;
            }
            else {
                B[t] = B[t-1]-1;
            }
        }
        iBCurTime += ta2[i];
    }

    if (iACurTime < iBCurTime) {
        for (int i = iACurTime; i < iBCurTime; ++i) {
            A[i] = A[i-1];
        }
        iACurTime = iBCurTime;
    }
    else {
        for (int i = iBCurTime; i < iACurTime; ++i) {
            B[i] = B[i-1];
        }
        iBCurTime = iACurTime;
    }

    int Meet(-1);
    for (int t = 1; t < iACurTime; ++t) {
        if (A[t] == B[t]) {
            Meet = t;
            break;
        }
    }

    cout << Meet;
    return 0;
}