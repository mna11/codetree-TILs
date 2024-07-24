#include <iostream>
using namespace std;

int Func(int m1, int s1, int m2, int s2){
    int elapse_time(0);
    elapse_time = ( m2 - m1 ) * 60;
    elapse_time += s2 - s1;
    return elapse_time;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << Func(a, b, c, d);
    return 0;
}