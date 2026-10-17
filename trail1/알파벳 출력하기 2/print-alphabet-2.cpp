#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;

    int iCnt(64);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < i; ++j)
            cout << "  ";

        for (int j = 0; j < N - i; ++j) {
            ++iCnt;
            if (iCnt > 'Z') iCnt = 'A';
            cout << static_cast<char>(iCnt) << " ";
        }
        cout << endl;
    }
    return 0;
}
