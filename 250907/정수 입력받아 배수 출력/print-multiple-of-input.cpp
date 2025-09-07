#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = N, cnt=2; i <= N * 5; i = N * cnt, cnt++) cout << i <<' ';
    return 0;
}