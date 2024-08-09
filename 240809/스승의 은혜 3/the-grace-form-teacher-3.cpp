#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, B, P, S, buget(0), can_buy(0);
vector<vector<int>> cost;


bool compare(vector<int> c1, vector<int> c2){
    if (c1[0] + c1[1] == c2[0] + c2[1]) return c1[0] > c2[0];
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
        P = cost[i][0];
        S = cost[i][1];
        buget += P + S;
        if (buget - P / 2 > B) break;
        can_buy++;
    }
    cout << can_buy;
    return 0;
}