#include <iostream>
using namespace std;

int main() {
    int N(0);
    cin >> N; 
    int iNum(1);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i % 2 == 0)
                cout << iNum++ << ' ';
            else {
                cout << iNum << ' ';
                iNum += 2; 
            }
        }
        if (i % 2 == 0) ++iNum;
        else --iNum;
        cout << endl; 
    }
    return 0;
}