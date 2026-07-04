#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintMiddle(vector<int>& vec) {
    sort(vec.begin(), vec.end());
    cout << vec.at((vec.size()-1)/2) << ' ';
}

int main() {
    vector<int> vec;
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i){
        int a;
        cin >> a; 
        vec.push_back(a);
        if (i % 2 == 0) {
            PrintMiddle(vec);
        }
    }
    return 0;
}