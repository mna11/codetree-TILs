#include <iostream>
#include <vector>
#include <algorithm>

#define OFFSET 100

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vec;
    vec.resize(OFFSET * 2);
    while (N--){
        int a, b; 
        cin >> a >> b;
        a += OFFSET;
        b += OFFSET;

        for_each(vec.begin() + a, vec.begin() + b, 
            [](int& value) {
                value += 1;
            });
    }

    auto max_it = max_element(vec.begin(), vec.end());
    cout << *max_it; 

    return 0;
}