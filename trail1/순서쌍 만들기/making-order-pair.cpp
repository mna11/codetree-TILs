#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    for (int i = N; i >= 1; --i)
    {
        for (int j = N; j >= 1; --j)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}