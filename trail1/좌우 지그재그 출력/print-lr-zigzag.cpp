#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i % 2 == 0)
            {
                cout << i * N + j + 1 << ' ';
            }
            else
            {
                cout << (i + 1) * N - j << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}