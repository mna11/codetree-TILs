#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

class Programmer{
public:
    int remain_infect;
    bool infect;
    Programmer() = default;
    Programmer(int remain_infect, bool infect) : remain_infect(remain_infect), infect(infect) {}
};


int main() {
    int N, K, P, T;
    int t, x, y, result(0);
    Programmer programmer[101];
    tuple<int, int, int> time_order[251];

    cin >> N >> K >> P >> T;

    for (int i = 1; i <= N; i++) programmer[i] = Programmer(K, false);
    programmer[P].infect = true;

    for (int i = 0; i < T; i++){
        cin >> t >> x >> y;
        time_order[i] = make_tuple(t, x, y);
    }
    sort(time_order, time_order + T);
    for (int i = 0; i < T; i++){
        tie(t, x, y) = time_order[i];
        if (programmer[x].infect == true && programmer[x].remain_infect > 0){
            programmer[y].infect = true;
            programmer[x].remain_infect--;
            continue;
        }
        if (programmer[y].infect == true && programmer[y].remain_infect > 0){
            programmer[x].infect = true;
            programmer[y].remain_infect--;
        }
    }
    for (int i = 1; i <= N; i++){
        cout << programmer[i].infect;
    }
    return 0;
}