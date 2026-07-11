#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec;
    int N, M, K;
    cin >> N >> M >> K;
    vec.resize(N);
    int iStudent;
    int Honda(-1);
    for (int i = 0; i < M; ++i) {
        cin >> iStudent;
        ++vec[iStudent-1];
        for_each(vec.begin(), vec.end(), [&K, &Honda, &iStudent](int& value){
            if (value >= K) {
                Honda = iStudent;
            }
        });
        if (Honda != -1) break;
    }
    cout << Honda;
    return 0;
}