#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N(0), acc(0);
    cin >> N;
    for (int i = 1; i <= 100; ++i){
        acc += i;
        if (acc >= N){
            cout << i;
            break;
        }
    }
    return 0;
}