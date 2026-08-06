#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << "*" << endl;
    for (int i = 1; i < N; ++i)
    {
        for (int j = 0; j <= 2 * i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}