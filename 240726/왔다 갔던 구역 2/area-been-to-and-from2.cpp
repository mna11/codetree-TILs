#include <iostream>
using namespace std;

class Area{
public:
    int plus[1001] = {0,};
    int minus[1001] = {0, };
    int cur_pos = 0;
    int cnt = 0;
    Area(){};

    void plusDir(int x){
        int tmp = cur_pos + x;
        for (cur_pos; cur_pos < tmp; cur_pos++){
            if (cur_pos >= 0) {
                plus[cur_pos]++;
            }
            else if (cur_pos < 0) {
                minus[abs(cur_pos)]++;
            }
        }
    }
    void minusDir(int x){
        int tmp = cur_pos - x;
        for (cur_pos; cur_pos > tmp; cur_pos--){
            if (cur_pos > 0) {
                plus[cur_pos - 1]++;
            }
            else if (cur_pos < 0) {
                minus[abs(cur_pos - 1)]++;
            }
            else {
                minus[1]++;
            }
        }
    }
    void PrintAreaNumOver2(){
        for (int i = 0; i < 1001; i++) {
            if (plus[i] > 1) cnt++;
        }
        for (int i = 1; i < 1001; i++) {
            if (minus[i] > 1) cnt++;
        }
        cout << cnt;
    }
};

int main() {
    int n, x;
    char dir;
    Area area;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> dir;
        if (dir == 'R'){
            area.plusDir(x);
        }
        else {
            area.minusDir(x);
        }
    }
    area.PrintAreaNumOver2();
    
    return 0;
}