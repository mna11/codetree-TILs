#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec(5);
    for (int i = 0; i < 5; ++i)
        cin >> vec[i];
    bool bS(true);
    for_each(vec.begin(), vec.end(), [&bS](const int& value)
    {
        if (value % 3 != 0) bS = false;
    });
    cout << bS;
    return 0;
}