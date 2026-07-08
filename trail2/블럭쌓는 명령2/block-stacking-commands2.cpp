#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> vec;
    vec.resize(N + 1);
    while (K--) {
        int a, b;
        cin >> a >> b;
        for_each(vec.begin() + a, vec.begin() + b + 1, [](int& v){ v += 1;}); 
    }
    auto iter = max_element(vec.begin(), vec.end());
    cout << *iter << endl;
    return 0;
}