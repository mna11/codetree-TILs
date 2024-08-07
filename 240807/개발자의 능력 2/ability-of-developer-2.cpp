#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

vector<int> dev;
int max_diff(INT_MIN), min_diff(INT_MAX);

// solve 1: 정렬
// int main() {
//     for (int i = 0; i < 6; i++){
//         int ability;
//         cin >> ability;
//         dev.push_back(ability);
//     }
//     sort(dev.begin(), dev.end());
//     for (int i = 0; i < 3; i++){
//         int diff = dev[i] + dev[5-i];
//         max_diff = max(max_diff, diff);
//         min_diff = min(min_diff, diff);
//     }
//     cout << max_diff - min_diff;
//     return 0;
// }

int main(void){
    for (int i = 0; i < 6; i++){
        int ability;
        cin >> ability;
        dev.push_back(ability);
    }

    for (int a = 0; a < 5; a++){
        for (int b = a + 1; b < 6; b++){
            for (int c = 0; c < 5; c++){
                for (int d = c + 1; d < 6; d++){
                    for (int e = 0; e < 5; e++){
                        for (int f = e + 1; f < 6; f++){
                            if (a == b ||
                                a == c ||
                                a == d ||
                                a == e ||
                                a == f ||
                                b == c ||
                                b == d ||
                                b == e ||
                                b == f ||
                                c == d ||
                                c == e ||
                                c == f ||
                                d == e ||
                                d == f ||
                                e == f) continue;
                            int max_team, min_team;
                            int sum1 = dev[a] + dev[b];
                            int sum2 = dev[c] + dev[d];
                            int sum3 = dev[e] + dev[f]; 
                            max_team = max(max(sum1, sum2), sum3);
                            min_team = min(min(sum1, sum2), sum3);
                            min_diff = min(min_diff, max_team - min_team);
                        }
                    }
                }
            }
        }
    }

    cout << min_diff;

    return 0;
}