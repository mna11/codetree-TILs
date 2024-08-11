#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <climits>

using namespace std;

int n, c, g, h, Ta, Tb, max_work(INT_MIN);
vector<tuple<int,int>> equipment;

int main() {
    
    cin >> n >> c >> g >> h;
    for (int i = 0; i < n; i++){
        cin >> Ta >> Tb;
        equipment.push_back(make_tuple(Ta, Tb));
    }
    for (int i = 0; i <= 1000; i++){
        int work(0);
        for (int j = 0; j < n; j++){
            tie(Ta, Tb) = equipment[j];
            if (i < Ta) work += c;
            else if (i >= Ta && i <= Tb) work += g;
            else work += h;
        }
        max_work = max(max_work, work);
    }

    cout << max_work;

    return 0;
}