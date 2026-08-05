#include <iostream>
using namespace std;

int main() {
    int N(0), M(0);
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cout << "*" << ' ';
        }
        cout << endl;
    }
    return 0;
}