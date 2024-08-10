#include <iostream>
#include <string>

#define MAX_NUMBER 1000

using namespace std;

int n(0), strike(0), ball(0), cnt(0);
string num, tmp;
bool is_possible_number[MAX_NUMBER + 1];

int main() {
    //init
    //같은 숫자가 겹친 경우, 0이 포함된 경우에 false로 만들어준다. 
    for (int i = 100; i <= 999; i++) {
        tmp = to_string(i);
        if (tmp[0] == '0' || tmp[1] == '0' || tmp[2] == '0') is_possible_number[i] = false;
        else if (tmp[0] == tmp[1] || tmp[1] == tmp[2] || tmp[2] == tmp[0]) is_possible_number[i] = false;
        else is_possible_number[i] = true;
    }

    //solve
    //Logic Flow: 
    // 1. 입력받으면 100부터 999까지 돌면서, 스트라이크와 볼 개수를 체크한다. 
    // 2. 만약 체크한 스트라이크와 볼 개수가 주어진 값과 다를 경우, 해당 수는 가능한 숫자가 아니므로 false로 만든다.
    // 3. 다 끝나면 is_possible_number가 true인 경우만 세서 몇개인지 출력한다. 
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num >> strike >> ball;

        for (int j = 100; j <= 999; j++){
            if(!is_possible_number[j]) continue;
            int strike_cnt(0), ball_cnt(0);
            tmp = to_string(j);

            for (int d1 = 0; d1 < num.length(); d1++){
                for (int d2 = 0; d2 < tmp.length(); d2++){
                    if (d1 == d2 && num[d1] == tmp[d2]) strike_cnt++;
                    else if (d1 != d2 && num[d1] == tmp[d2]) ball_cnt++;
                }
            }
            if(strike != strike_cnt || ball != ball_cnt) is_possible_number[j] = false;
        }
    }

    for (int i = 100; i <= 999; i++){
        if (is_possible_number[i]) cnt++;
    }

    cout << cnt;
    return 0;
}