#include <iostream>
#include <array>

#define MAX_N 26
#define MAX_M 100
using namespace std;

int n, m, p, u;
char c;
int send_person[MAX_M], unreading_person_cnt[MAX_M];
array<array<bool, MAX_N>, MAX_M> check_reading_person;

int main() {
    cin >> n >> m >> p;
    for (int i = 0; i < m; i++){
        cin >> c >> u;
        send_person[i] = c;
        unreading_person_cnt[i] = u;
    }

    for (int i = 0; i < m; i++){
        check_reading_person[i].fill(false);
        for (int j = i; j < m; j++){
            check_reading_person[i][send_person[j] - 'A'] = true;
        }
    }
    for (int i = 0; i < n; i++){
        if(!check_reading_person[p - 1][i]) cout << char(i + 'A') << " ";
    }
    return 0;
}