#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = 0; i < 2 * N + 1; ++i)
    {
        for (int j = 0; j < 2 * N + 1; ++j)
        {
            if (i % 2 == 0 || i % 2 == 1 && j % 2 == 0)
                cout << "* ";
            else if ( i % 2 == 1 )
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}