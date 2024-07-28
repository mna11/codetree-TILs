#include <iostream>

#define A 0
#define B 1

using namespace std;

int main() {
    int n, m, v, t;
    int time(0), result(0), lead(-1);
    int time_pos[2][1000001] = {{0,},};

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> v >> t;
        for (int i = 0; i < t; i++) {
            time_pos[A][time + 1] = time_pos[A][time] + v;
            time++;
        }
    }
    time = 0;
    for (int i = 0; i < m; i++){
        cin >> v >> t;
        for (int i = 0; i < t; i++) {
            time_pos[B][time + 1] = time_pos[B][time] + v;
            time++;
        }
    }
    for (int i = 0; i <= time; i++){
        if (lead == -1){
            if (time_pos[A][i] > time_pos[B][i]) lead = A;
            else if (time_pos[A][i] < time_pos[B][i]) lead = B;
            if (lead != -1) {
                result++;
            }
            continue;
        }

        if (lead = B && time_pos[A][i] > time_pos[B][i]) {
            lead = A;
            result++;
        }
        else if (lead = A && time_pos[A][i] < time_pos[B][i]){
            lead = B;
            result++;
        }
    }

    cout << result;
    return 0;
}