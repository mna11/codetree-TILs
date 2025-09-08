#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> vec1, vec2;
    int n, m, input;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        for (int j = 0; j < m; j++){
            cin >> input;
            tmp.push_back(input);
        }
        vec1.push_back(tmp);
    }

    for (int i = 0; i < n; i++){
        vector<int> tmp;
        for (int j = 0; j < m; j++){
            cin >> input;
            tmp.push_back(input);
        }
        vec2.push_back(tmp);
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << abs((int)(vec1[i][j] == vec2[i][j])-1) << ' ';
        }
        cout << '\n';
    }
    return 0;
}