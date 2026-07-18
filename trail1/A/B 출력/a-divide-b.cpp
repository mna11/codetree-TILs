#include <iostream>
using namespace std;

int main() {
    int A(0), B(0);
    cin >> A >> B;
    int cnt(0);
    cout << A / B << '.';
    A %= B;

    while(cnt < 20)
    {
        while (A < B) {
            if (A == 0) break;
            A *= 10;
            if (A < B) {
                cout << '0';
                cnt++;
            }
            if (cnt >=20) break;
        }
        if (cnt >= 20) break;
        cout << A / B;
        A %= B;
        cnt++;
    }
    
    return 0;
}