#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    vector<int> vec;
    int input;

    for (int j = 0; j < 4; j++){
        for (int i = 0; i < 4; i++){
            cin >> input;
            vec.push_back(input);
        }       
        cout << accumulate(vec.begin(), vec.end(), 0) << '\n';
        vec.clear();
    }
    return 0;
}