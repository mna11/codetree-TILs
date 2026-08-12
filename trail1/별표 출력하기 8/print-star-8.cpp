#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        if (i % 2 == 0) {
            cout << "* " << endl;
            continue;
        }

        for (int j = 0; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}