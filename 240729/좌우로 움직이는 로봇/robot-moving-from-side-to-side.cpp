#include <iostream>
#include <algorithm>

#define A 0 
#define B 1

using namespace std;

int main() {
    int n, m;
    int t;
    char d;
    int time(1), max_time(0);
    int cord[2][1000001] = {{0,},};
    bool is_same = true;
    bool is_first = true;
    int result(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> t  >> d;
        if (d == 'L') {
            for (int j = 0 ; j < t; j++) {
                cord[A][time] = cord[A][time-1] - 1;
                time++;
            }
        }
        else if (d == 'R'){
            for (int j = 0; j < t; j++){
                cord[A][time] = cord[A][time-1] + 1;
                time++;
            }
        }
    }
    max_time = time;
    for (time; time < 1000001; time++) cord[A][time] = cord[A][time-1];

    time = 1;
    for (int i = 0; i < m; i++){
        cin >> t  >> d;
        if (d == 'L') {
            for (int j = 0 ; j < t; j++) {
                cord[B][time] = cord[B][time-1] - 1;
                time++;
            }
        }
        else if (d == 'R'){
            for (int j = 0; j < t; j++){
                cord[B][time] = cord[B][time-1] + 1;
                time++;
            }
        }
    }
    max_time = max(max_time, time);
    for (time; time < 1000001; time++) cord[B][time] = cord[B][time-1];

    for (int i = 0; i <= max_time; i++){
        if (cord[A][i] == cord[B][i]) is_same = true;
        else if (is_same && cord[A][i] != cord[B][i]) {
            is_same = false;
            if (is_first) is_first = false;
            else result++;
        }
    }

    cout << result;

    return 0;
}