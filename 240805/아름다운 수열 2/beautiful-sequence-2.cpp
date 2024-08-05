#include <iostream>
#include <vector>

using namespace std;

vector<int> A, B;
vector<bool> check;
int n, m, x, cnt;

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) { cin >> x; A.push_back(x); }
    for (int i = 0; i < m; i++) { cin >> x; B.push_back(x); }

    for (int i = 0; i <= n - m; i++){
        int same_cnt(0);
        check.clear();
        check.resize(m, false);

        for (int j = i; j < i + m; j++){
            for (int k = 0; k < m; k++){
                if (!check[k] && A[j] == B[k]) {
                    same_cnt++;
                    check[k] = true;
                }
            }
        }
        if (same_cnt == m) cnt++;
    }

    cout << cnt;
    return 0;
}