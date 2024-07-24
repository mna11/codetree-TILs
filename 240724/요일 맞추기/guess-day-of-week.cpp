#include <iostream>
#include <utility>
#include <string>
using namespace std;

int Func(int m1, int m2, int d1, int d2){
    int elapse_day(0);
    int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    elapse_day = d2 - d1;
    for (int i = m1; i < m2; i++){
        elapse_day += month_day[i-1];
    }

    if (elapse_day < 0) return 7 - (-elapse_day % 7);
    return elapse_day % 7;
}

int main() {
    int m1, m2, d1, d2;
    string day_of_week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cin >> m1 >> d1 >> m2 >> d2;
    cout << day_of_week[Func(m1, m2, d1, d2)];
    return 0;
}