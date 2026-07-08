#include <iostream>
#include <vector>
#include <algorithm>

#define OFFSET 1000
using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    int iCurPos = OFFSET;
    vector<int> vec;
    vec.resize(OFFSET * 2 + 1);
    for (int i = 0; i < n; ++i) {
        switch(dir[i]) {
            case 'L':
                for_each(vec.begin() + iCurPos - x[i], vec.begin() + iCurPos,
                [](int& value) {
                    value += 1;
                });
                iCurPos -= x[i];
                break;
            case 'R':
                for_each(vec.begin() + iCurPos, vec.begin() + iCurPos + x[i],
                [](int& value) {
                    value += 1;
                });
                iCurPos += x[i];
                break;
        }
    }
    int cnt(0);
    for_each(vec.begin(), vec.end(),
    [&cnt](int& value) {
        if (value >= 2) ++cnt;
    });

    cout << cnt;
    return 0;
}