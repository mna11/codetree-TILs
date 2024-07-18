#include <iostream>
using namespace std;

int returnMonthDay(int m){
    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return d[m-1];
}

bool func(int m, int d){
    if (m > 12) return false;

    if (d <= returnMonthDay(m)) return true;
    else return false;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int M, D;
    cin >> M >> D;
    
    if (func(M, D)) cout << "Yes";
    else cout << "No";
    return 0;
}