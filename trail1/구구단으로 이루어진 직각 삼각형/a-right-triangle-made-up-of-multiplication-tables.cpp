#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N(0);
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cout << i<<" * " <<j<<" = "<< i*j;
            if (i+j == N+ 1) break;
            cout << " / ";
        }
        cout << endl;
    }
    return 0;
}