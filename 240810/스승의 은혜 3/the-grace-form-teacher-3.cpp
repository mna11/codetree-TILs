#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N, B, P, S, buget(0), max_can_buy(INT_MIN), can_buy(0);
vector<vector<int>> cost;

int main() {

    //init
    cin >> N >> B;
    for (int i = 0; i < N; i++){
        vector<int> tmp;
        cin >> P >> S;
        tmp.push_back(P);
        tmp.push_back(S);
        cost.push_back(tmp);
    }

    //solve
    for (int i = 0; i < N; i++){
        buget = 0;
        can_buy = 0;
        for (int j = 0; j < N; j++){
            if (i == j) cost[i][0] /= 2;
            buget += cost[j][0] + cost[j][1];
            if (buget <= B) can_buy++;
            else {
                if (i == j) cost[i][0] *= 2;
                break;
            }
        }
        max_can_buy = max(max_can_buy, can_buy);
    }
    cout << max_can_buy;
    return 0;
}