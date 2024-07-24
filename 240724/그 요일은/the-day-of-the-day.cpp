#include <iostream>
#include <string>

using namespace std;

int Func(int m1, int d1, int m2, int d2, int d_w_n){
    int elapse_day(0);
    int day_times(0);
    int month_day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    elapse_day = d2 - d1;
    for (int i = m1; i < m2; i++) elapse_day += month_day[i-1];
    day_times = elapse_day / 7;
    if (elapse_day % 7 < d_w_n) return day_times;
    else return day_times + 1;
}


int main() {
    int m1, d1, m2, d2, day_week_num;
    string day_week;
    string day_weeks[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cin >> m1 >> d1 >> m2 >> d2 >> day_week;
    for (int i = 0; i < 7; i++){
        if (!day_weeks[i].compare(day_week)){
            day_week_num = i;
            break;
        }
    }
    cout << Func(m1, d1, m2, d2, day_week_num);

    return 0;
}