#include <iostream>

#define A 0
#define B 1
#define S 2

using namespace std;

int main() {
    int n, m, v, t, time(1);
    int result(0);
    int lead(-1);
    int road[2][1000001] = {{0,},};

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            road[A][time] = road[A][time-1] + v;
            time++;
        }
    }
    time = 1;
    for (int i = 0; i < m; i++){
        cin >> v >> t;
        for (int j = 0; j < t; j++) {
            road[B][time] = road[B][time-1] + v;
            time++;
        }
    }

    for (int i = 1; i < time; i++){
        if (road[A][i] > road[B][i]) {
            if (lead != A) result++;
            lead = A;
        }
        else if (road[A][i] < road[B][i]){
            if (lead != B) result++;
            lead = B;
        }
        else {
            if (lead != S) result++;
            lead = S;
        }
    }
    cout << result;
    return 0;
}