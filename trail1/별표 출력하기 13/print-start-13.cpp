#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = 0; i < 2 * N; ++i)
    {
        if (i % 2 == 0)
        {
            // 0 -> N
            // 2 -> N - 1
            // 4 -> N - 2
            for (int j = 0; j < N - i/2; ++j)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            // 1 -> 1 
            // 3 -> 2
            // 5 -> 3
            for (int j = 0; j < (i + 1) / 2; ++j)
            {
                cout << "* ";
            }
            cout << endl;

        }
    }
    return 0;
}