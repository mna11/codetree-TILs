#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<vector<int>> vec(2);
    for (int i = 0; i < 2; ++i) {
        vec[i].resize(3);
        for (int j = 0; j < 3; ++j)
        {
            cin >> vec[i][j];
        }
    }


    int iCnt(0);
    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= N; ++b) {
            for (int c = 1; c <= N; ++c) {
                for (int i = 0; i < 2; ++i) {
                    if ((abs(a - vec[i][0]) <= 2 || abs(a- vec[i][0]) >= N-2)
                        && (abs(b - vec[i][1]) <= 2 || abs(b- vec[i][1]) >= N-2)
                        && (abs(c - vec[i][2]) <= 2 || abs(c- vec[i][2]) >= N-2) )
                        {
                            ++iCnt;
                            break;
                        }
                }
            }
        }
    }
    cout << iCnt;
    return 0;
}