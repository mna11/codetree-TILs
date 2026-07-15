#include <iostream>
using namespace std;

int main() {
    int N(0), num(1);
    cin >> N;
    while(num*3 <= N)
    {
        cout << num * 3<< ' ';
        ++num; 
    }

    return 0;
}