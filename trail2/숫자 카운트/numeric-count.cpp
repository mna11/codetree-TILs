#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<tuple<int, int, int>> vInput(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> get<0>(vInput[i])
            >> get<1>(vInput[i])
            >> get<2>(vInput[i]);
    }

    int iCnt(0);
    for (int i = 1; i < 10; ++i)
    {
        for (int j = 1; j < 10; ++j)
        {
            for (int k = 1; k < 10; ++k)
            {
                if (i == j || j == k || k == i) continue;

                bool succeed(true);
                for(int n = 0; n < N; ++n)
                {
                    int iStrike(0), iBall(0);
                    int a = get<0>(vInput[n]) / 100;
                    int b = (get<0>(vInput[n]) / 10 ) % 10;
                    int c = (get<0>(vInput[n]) % 10);

                    if (a == i) iStrike++;
                    if (b == j) iStrike++;
                    if (c == k) iStrike++;
                    if (a == j || a == k) iBall++;
                    if (b == i || b == k) iBall++;
                    if (c == j || c == i) iBall++;

                    if (iStrike != get<1>(vInput[n])
                        || iBall != get<2>(vInput[n])){
                            succeed = false;
                            break;
                        }
                }
                if (succeed) iCnt++;
            }
        }
    }
    cout << iCnt;
    return 0;
}