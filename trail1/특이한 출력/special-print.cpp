#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cout << "(" << i << ", " << j << ") ";
            if ((i + j) % 4 == 0) cout << endl;
        }
    }

    return 0;
}