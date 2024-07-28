#include <iostream>

#define A 0
#define B 1
using namespace std;

int main() {
    int N, M;
    char d;
    int t;
    int a_cur(0), b_cur(0);
    int time(0);
    int time_pos_record[2][1000];

    cin >> N >> M;

    for (int i = 0; i < N ; i++){
        cin >> d >> t;
        if (d == 'R'){
            for (int i = 0; i < t; i++) time_pos_record[A][++time] = a_cur+=1;
        }
        else if (d == 'L'){
            for (int i = 0; i < t; i++) time_pos_record[A][++time] = a_cur-=1;
        }
    }
    time = 0;
    for (int i = 0; i < M ; i++){
        cin >> d >> t;
        if (d == 'R'){
            for (int i = 0; i < t; i++) time_pos_record[B][++time] = b_cur+=1;
        }
        else if (d == 'L'){
            for (int i = 0; i < t; i++) time_pos_record[B][++time] = b_cur-=1;
        }
    }
    for (int i = 1; i <= time; i++){
        if (time_pos_record[A][i] == time_pos_record[B][i]) {
            cout << i;
            break;
        }
    }

    return 0;
}