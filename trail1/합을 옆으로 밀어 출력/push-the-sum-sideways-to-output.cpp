#include <iostream>
using namespace std;

int main() {
    int N, Num, Acc(0);
    cin >> N;
    while(N--) {
        cin >> Num;
        Acc += Num;
    }
    string str = to_string(Acc);
    cout << str.substr(1, str.size() - 1) + str.substr(0, 1) << flush;
    return 0;
}