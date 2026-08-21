#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            if (i == 1) {
                cout << "* ";
            }
            else
            {
                if (j % 2 == 0 && j >= i)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}