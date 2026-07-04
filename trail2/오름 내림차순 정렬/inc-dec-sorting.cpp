#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void PrintVector(vector<int>& v){
    for (int i : v) {
        cout << i << ' ';
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    vector<int> vec;
    while(N--){
        int a;
        cin >> a;
        vec.push_back(a);
    }
    std::sort(vec.begin(), vec.end());
    PrintVector(vec);
    std::sort(vec.begin(), vec.end(), greater<int>());
    PrintVector(vec);

    return 0;
}