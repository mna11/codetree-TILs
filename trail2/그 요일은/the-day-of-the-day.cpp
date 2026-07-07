#include <iostream>
#include <string> 
#include <numeric>
#include <utility>
#include <vector>
#include <map> // key-value 쌍

using namespace std;

int m1, m2, d1, d2;
string A;

pair<int, int> Func(pair<int, int>& d1, pair<int, int>& d2) {
    vector<int> MMD = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int e_day = d2.second - d1.second;
    int left = d1.first - 1;
    int right = d2.first - 1;
    e_day += accumulate(MMD.begin() + left, MMD.begin() + right, 0);
    return make_pair(e_day / 7, e_day % 7);
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    pair<int, int> day1 = make_pair(m1, d1);
    pair<int, int> day2 = make_pair(m2, d2);

    map<string, int> m = {
        {"Mon", 0},
        {"Tue", 1},
        {"Wed", 2},
        {"Thu", 3},
        {"Fri", 4},
        {"Sat", 5},
        {"Sun", 6}
    };

    pair<int, int> e_day = Func(day1, day2);
    int result = e_day.first + (m[A] <= e_day.second ? 1 : 0);
    cout << result << endl;
    

    return 0;
}