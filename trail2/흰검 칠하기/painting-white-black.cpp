#include <iostream>
#include <vector>
#include <algorithm> 

#define OFFSET 100000

using namespace std;

enum COLOR
{
    NONE,
    BLACK,
    WHITE,
    GRAY
};

struct ColorCnt {
    int color = NONE;
    int w_cnt = 0;
    int b_cnt = 0;
};


int main() {
    int N(0);
    vector<ColorCnt> vec;
    vec.resize(OFFSET * 2 + 1);
    int iCurPos = OFFSET;
    cin >> N;
    while(N--) {
        int x(0);
        char dir(0);
        cin >> x >> dir;
        switch(dir) {
            case 'L':
                for_each(vec.begin() + iCurPos - x + 1, vec.begin() + iCurPos + 1,
                [](ColorCnt& value){
                    value.w_cnt += 1;
                    if (value.w_cnt >= 2 && value.b_cnt >= 2) value.color = GRAY;
                    else value.color = WHITE;
                });
                iCurPos -= (x - 1);
                break;
            case 'R':
                for_each(vec.begin() + iCurPos, vec.begin() + iCurPos + x,
                [](ColorCnt& value){
                    value.b_cnt += 1;
                    if (value.w_cnt >= 2 && value.b_cnt >= 2) value.color = GRAY;
                    else value.color = BLACK;
                });
                iCurPos += (x - 1);
                break;
        }
    }
    int b(0), w(0), g(0);
    for_each(vec.begin(), vec.end(), 
        [&b, &w, &g](ColorCnt& value){
            switch(value.color){
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
    cout << w << ' ' << b << ' ' << g << endl;

    return 0;
}