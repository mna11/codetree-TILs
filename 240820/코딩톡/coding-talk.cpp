#include <iostream>
#include <array>

#define MAX_N 26
#define MAX_M 100
using namespace std;

int n, m, p, u;
char c;
int send_person[MAX_M], unreading_person_cnt[MAX_M];
array<array<bool, MAX_N>, MAX_M> check_unreading_person;
array<int, MAX_M> can_unreading_person_cnt;

int main() {
    cin >> n >> m >> p;
    for (int i = 0; i < m; i++){
        cin >> c >> u;
        send_person[i] = c;
        unreading_person_cnt[i] = u;
        if (u == 0) check_unreading_person[i].fill(false);
        else check_unreading_person[i].fill(true);
    }

    for (int i = 0; i < m; i++){
        can_unreading_person_cnt[i] = n;
        for (int j = i; j < m; j++){
            if (check_unreading_person[i][send_person[j] - 'A']) {
                can_unreading_person_cnt[i]--;
                check_unreading_person[i][send_person[j] - 'A'] = false;
            }
        }
    }


    // for (int i = 0; i < m; i++){
    //     cout << can_unreading_person_cnt[i] << " ";
    //     for (int j = 0; j < n; j++){
    //         if(check_unreading_person[i][j]) cout << char(j + 'A') << " "; 
    //     }
    //     cout << endl;
    //}
    
    for (int i = m - 1; i >= 0; i--){
        if (can_unreading_person_cnt[i] == unreading_person_cnt[i]){
            for (int j = i - 1; j >= 0; j--){
                for (int k = 0; k < n; k++){
                    if (check_unreading_person[i][k]) check_unreading_person[j][k] = true;
                }
            }
        }
    }

    for (int i = 0; i < n; i++){
        if(check_unreading_person[p - 1][i]) cout << char(i + 'A') << " ";
    }
    return 0;
}