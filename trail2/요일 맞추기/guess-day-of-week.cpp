#include <iostream>
#include <vector>
#include <numeric> // 구간합 사용 함수
#include <string>
#include <algorithm>
#include <tuple>

using namespace std;

void Func(tuple<int, int, int>& d1, tuple<int,int, int>& d2) {
    vector<int> month_max_day = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<tuple<int, int, int>> vec = {d1, d2};
    sort(vec.begin(), vec.end());

    int left = get<0>(vec[0]) - 1;
    int right = get<0>(vec[1]) - 1;
    int total_sum = std::accumulate(month_max_day.begin() + left, month_max_day.begin() + right, 0);
    
    total_sum = total_sum - get<1>(vec[0]) + get<1>(vec[1]);
    total_sum = 0 == get<2>(vec[0]) ? total_sum : -1 * total_sum;
    while (total_sum < 0) total_sum += 7;
    int Days = total_sum % 7;

    vector<string> days = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << days[Days] << endl;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    tuple<int, int, int> day1 = make_tuple(m1, d1, 0);
    tuple<int, int, int> day2 = make_tuple(m2, d2, 1);
    Func(day1, day2);
    return 0;
}