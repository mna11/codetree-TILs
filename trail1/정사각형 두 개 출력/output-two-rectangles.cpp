#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            for (int l = 0; l < N; ++l)
            {
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}