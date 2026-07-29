#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0), B(M, 0);
    for (int i = 0; i < N; ++i)
        cin >> A[i];
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    int iResult(0);
    for (int i = 0; i <= N - M; ++i)
    {
        vector<bool> bCheck(M, false);
        bool bOk(true);
        for (int j = i; j < i + M; ++j)
        {
            for (int k = 0; k < M; ++k) {
                if (!bCheck[k] && A[j] == B[k]) {
                    bCheck[k] = true;
                    break;
                }
            }
        }
        for_each(bCheck.begin(), bCheck.end(), [&bOk](const bool& value) {
            if (false == value) bOk = false;
            });
        if (bOk) iResult++;
    }

    cout << iResult;
    return 0;
}