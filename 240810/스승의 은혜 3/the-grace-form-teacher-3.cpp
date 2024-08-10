#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, B, P, S, buget(0), max_can_buy(0), can_buy(0);
vector<vector<int>> cost;

bool compare(vector<int> c1, vector<int> c2){
    return c1[0] + c1[1] < c2[0] + c2[1];
}

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
    sort(cost.begin(), cost.end(), compare);
    for (int i = 0; i < N; i++){
        buget = 0;
        can_buy = 0;
        cost[i][0] /= 2;
        for (int j = 0; j < N; j++){
            buget += cost[j][0] + cost[j][1];
            if (buget <= B) can_buy++;
            else buget -= (cost[j][0] + cost[j][1]);
        }
        cout << endl;
        cost[i][0] *= 2;
        max_can_buy = max(max_can_buy, can_buy);
    }

    cout << max_can_buy;
    return 0;
}