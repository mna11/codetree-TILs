#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vecInt;
    int idx = 10;
    while(vecInt.size() != N)
    {
        if (idx % 2 == 1)
        {
            vecInt.push_back(idx);
        }
        ++idx;
    }
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << vecInt[j] + 2 * i << " ";
        }
        cout << endl;
    }
    return 0;
}