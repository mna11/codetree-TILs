#include <iostream>
using namespace std;

int main() {
    int N, iCnt(0);
    string sSrc;
    cin >> N >> sSrc;
    while (N--) {
        string sDst;
        cin >> sDst;
        if (sSrc.compare(sDst) == 0) ++iCnt;
    }
    cout << iCnt << flush;
    return 0;
}