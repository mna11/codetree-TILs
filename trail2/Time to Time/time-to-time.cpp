#include <iostream>
using namespace std;

int main() {
    int Ah(0), Bm(0), Ch(0), Dm(0);
    cin >> Ah >> Bm >> Ch >> Dm;
    int duration(0);
    while (true) {
        if (Ah == Ch && Bm == Dm) break;

        ++duration;
        ++Bm;
        if (Bm == 60) {
            ++Ah;
            Bm = 0;
        }
    }

    cout << duration << endl;
    return 0;
}