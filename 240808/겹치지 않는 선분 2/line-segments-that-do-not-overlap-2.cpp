#include <iostream>
#include <vector>

using namespace std;

int N, x1, x2, cnt;
vector<vector<int>> line;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++){
        vector<int> tmp;
        cin >> x1 >> x2;
        tmp.push_back(x1);
        tmp.push_back(x2);
        line.push_back(tmp);
    }

    for (int i = 0; i < N; i++){
        bool cross = false;
        for (int j = 0; j < N; j++){
            if (i == j) continue;
            if ((line[j][0] > line[i][0] && line[j][1] < line[i][1]) || 
                (line[i][0] > line[j][0] && line[i][1] < line[j][1])){
                cross = true;
                break;
            }
        }
        if (!cross) cnt++;
    }

    cout << cnt;
    return 0;
}