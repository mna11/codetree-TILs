#include <iostream>
using namespace std;

int Func(int m1, int d1, int m2, int d2){
    int elapse_day(0);
    int month_date[12] = {31, 30, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    elapse_day = d2 - d1 + 1;
    for (int i = m1; i < m2; i++){
        elapse_day += month_date[i-1];
    }
    return elapse_day;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    cout << Func(m1, d1, m2, d2);
    return 0;
}