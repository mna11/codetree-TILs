#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;

    for (int i = 0; i < 2 * N; ++i)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j <= i/2; ++j)
            {
                cout << "* ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < N - i/2; ++j)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}