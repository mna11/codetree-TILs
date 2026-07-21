#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;
vector<vector<char>> v;
int R, C;

int main() {
    cin >> R >> C;
    v.resize(R, vector<char>(C));

    for (int i = 0; i < R; ++i)
    {
        for (int j = 0; j < C; ++j)
        {
            cin >> v[i][j];
        }
    }

    int iResult(0);
    for (int i = 1; i < R; ++i)
    {
        for (int j = 1; j < C; ++j)
        {
            if (v[0][0] != v[i][j])
            {
                for (int k = i + 1; k < R; ++k)
                {
                    for (int l = j + 1; l < C; ++l)
                    {
                        if (v[i][j] != v[k][l])
                        {
                            for (int a = k + 1; a < R; ++a)
                            {
                                for (int b = l + 1; b < C; ++b)
                                {
                                    if (v[k][l] != v[a][b] && a == R - 1 && b == C - 1)
                                        iResult += 1; 
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << iResult;
    return 0;
}