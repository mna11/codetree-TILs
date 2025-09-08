#include <iostream>
#include <vector>
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

    for (int i = 0; i < 4; i++){
        for (int j = 0; j <= i; j++){
            result += vec[i][j];
        }
    }
    cout << result;

    return 0;
}