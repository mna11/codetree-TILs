#include <iostream>
#include <tuple>
using namespace std;

bool IsLater(int d, int h, int m){
    tuple<int, int, int> t1 = make_tuple(11, 11, 11);
    tuple<int, int, int> t2 = make_tuple(d, h, m);
    return t1 <= t2;
}

int Func(int d, int h, int m){
    int elapse_time(0);
    if (IsLater(d, h, m)){
        for (int i = 11; i < d; i++) elapse_time += 24 * 60;
        elapse_time -= (11 * 60 + 11);
        
        elapse_time += (h * 60 + m);
        return elapse_time;
    }
    else return -1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << Func(a, b, c);
    return 0;
}