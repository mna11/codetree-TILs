#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int lef[10], rig[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> lef[i] >> rig[i];
    }

    // Please write your code here.

    int iCnt(0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int l = j + 1; l < n; ++l)
            {
                bool bInter(false);
                vector<bool> vecBool(101);
                for (int k = 0; k < n; ++k)
                {
                    if (k == i || k == j || k == l) continue;
                    for_each(vecBool.begin() + lef[k], vecBool.begin() + rig[k] + 1, 
                    [&bInter](auto v){
                        if (v) bInter = true;
                        v = true;
                    });
                    if (bInter) break;
                }
                if (!bInter) ++iCnt;
            }
        }
    }
    cout << iCnt;
    return 0;
}