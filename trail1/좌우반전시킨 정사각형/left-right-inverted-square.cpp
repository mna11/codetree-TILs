#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vecInt;
    for (int i = N; i >= 1; --i)
        vecInt.push_back(i);
    for (int i = 0; i < N; ++i)
    {
        for_each(vecInt.begin(), vecInt.end(), [&i](int& value)
        {
            cout << value << ' ';
            value += (value / (i+1));
        });
        cout << endl;
    }
    return 0;
}