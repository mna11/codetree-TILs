#include <iostream>
#include <algorithm>

#define A 0
#define B 1
using namespace std;

int main() {
    int n, m, v, t, time(1), max_time(-1);
    int result(0);
    bool is_same = true;
    int road[2][1000001] = {{0,},};

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            road[A][time] = road[A][time-1] + v;
            time++;
        }
    }
    max_time = time -1;
    time = 1;
    for (int i = 0; i < m; i++){
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            road[B][time] = road[B][time-1] + v;
            time++;
        }
    }
    max_time = max(max_time, time-1);

    for (int i = 1; i <= max_time; i++){
        if (!is_same && road[A][i] == road[B][i]) {
            result++;
            is_same = true;
        }
        else if (is_same && road[A][i] != road[B][i]) {
            result++;
            is_same = false; 
        }
    }
    cout << result;
    return 0;
}