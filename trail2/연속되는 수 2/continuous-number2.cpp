#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N ,cnt(0), input, max_cnt(-1);
    cin >> N;
    vector<int> vec;
    for (int i = 0; i < N; ++i) {
        cin >> input;
        vec.push_back(input);
        if (i == 0 || vec[i - 1] == vec[i]) max_cnt = max(max_cnt, ++cnt);
        else cnt = 1;
    }
    cout << max_cnt;
    return 0;
}