#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main() {
    int N;
    vector<int> vec;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 0)
            vec.insert(vec.begin(), tmp);
    }
    
    for (int i : vec)
        cout << i << ' ';
    return 0;
}