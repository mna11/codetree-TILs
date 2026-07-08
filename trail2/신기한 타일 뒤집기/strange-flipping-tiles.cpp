#include <iostream>
#include <vector>
#include <algorithm>

#define OFFSET 100000

using namespace std;

enum COLOR {
    GRAY,
    WHITE,
    BLACK
};

int n;
int x[1000];
char dir[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }
    
    vector<int> vec;
    vec.resize(OFFSET * 2 + 1);
    int iCurPos(OFFSET);
    for (int i = 0; i < n; ++i) {
        switch(dir[i]) {
            case 'L':
                for_each(vec.begin() + iCurPos - x[i] + 1, vec.begin() + iCurPos + 1,
                [](int& value){
                    value = WHITE;
                });
                iCurPos -= (x[i] - 1);
                break;
            case 'R':
                for_each(vec.begin() + iCurPos, vec.begin() + iCurPos + x[i],
                [](int& value){
                    value = BLACK;
                });
                iCurPos += (x[i] - 1);
                break;
        }
    }

    int b(0), w(0), g(0);
    for_each(vec.begin(), vec.end(),
    [&b, &w, &g](int& value){
        switch(value){
            case BLACK:
                ++b;
                break;
            case WHITE:
                ++w;
                break;
            case GRAY:
                ++g;
                break;
        }
    });
    cout << w << ' ' << b;

    return 0;
}