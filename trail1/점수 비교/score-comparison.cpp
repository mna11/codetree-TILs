#include <iostream>
#include <utility>

using namespace std;

int main() {
    int Math, Eng;
    cin>> Math >> Eng;
    pair<int, int> ipAGrad = make_pair(Math, Eng);
    cin >> Math >> Eng;
    pair<int, int> ipBGrad = make_pair(Math, Eng);
    if (ipAGrad.first > ipBGrad.first &&
        ipAGrad.second > ipBGrad.second) cout << 1 << endl;
    else cout << 0 << endl;
    return 0;
}