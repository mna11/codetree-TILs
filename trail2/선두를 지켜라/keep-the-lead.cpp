#include <iostream>
#include <vector>

using namespace std;

vector<int> A;
vector<int> B;
int main() {
    // Please write your code here.
    int N(0), M(0);
    int v(0), t(0);
    cin >> N >> M;
    A.resize(1000001);
    B.resize(1000001);
    
    int iCurTime(1);
    for (int i = 0; i < N; ++i) {
        cin >> v >> t;
        for (int j = iCurTime; j < iCurTime + t; ++j) {
            A[j] = A[j - 1] + v;
        }
        iCurTime += t;
    }

    iCurTime = 1;
    for (int i = 0; i < M; ++i) {
        cin >> v >> t;
        for (int j = iCurTime; j < iCurTime + t; ++j) {
            B[j] = B[j - 1] + v;
        }
        iCurTime += t;
    }

    char sundo(0);
    int result(0);
    for (int i = 0; i < iCurTime; ++i) {
        if (A[i] > B[i]) {
            if (sundo != 0 && sundo == 'B') ++result;
            sundo = 'A';
        }
        else if (B[i] > A[i])
        {
            if (sundo != 0 && sundo == 'A') ++result;
            sundo = 'B';
        }
    }

    cout << result << flush;
    return 0;
}