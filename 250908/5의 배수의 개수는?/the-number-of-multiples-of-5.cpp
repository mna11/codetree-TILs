#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    vector<vector<int>> vec;
    int input;
    int result = 0;
    for (int i = 0; i < 4; i++){
        vector<int> tmp;
        for (int j = 0; j < 4; j++){
            cin >> input;
            tmp.push_back(input);
        }
        vec.push_back(tmp);
    }

    for (vector<int> v : vec) {
        result += count_if(v.begin(), v.end(), [](int x){return x % 5 == 0;});
    }
    cout << result;
    return 0;
}