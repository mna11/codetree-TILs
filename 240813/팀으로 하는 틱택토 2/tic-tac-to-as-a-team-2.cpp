#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <set>

using namespace std;

int board[3][3];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
vector<int> tmp;
vector<tuple<int, int>> win_team;

bool InRange(int x, int y){
    return (x >= 0 && x < 3 && y >= 0 && y < 3);
}


int main() {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%1d", &board[i][j]);
        }
    }

    for (int x = 0; x < 3; x++){
        tmp.clear();
        for (int y = 0; y < 3; y++){
            tmp.push_back(board[x][y]);
        }
        sort(tmp.begin(), tmp.end());
        tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
        if (tmp.size() == 2) win_team.push_back(make_tuple(tmp[0] > tmp[1] ? tmp[1] : tmp[0], tmp[0] > tmp[1] ? tmp[0] : tmp[1]));
    }

    for (int y = 0; y < 3; y++){
        tmp.clear();
        for (int x = 0; x < 3; x++){
            tmp.push_back(board[x][y]);
        }
        sort(tmp.begin(), tmp.end());
        tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
        if (tmp.size() == 2) win_team.push_back(make_tuple(tmp[0] > tmp[1] ? tmp[1] : tmp[0], tmp[0] > tmp[1] ? tmp[0] : tmp[1]));
    }

    tmp.clear();
    for (int xy = 0; xy < 3; xy++){
        tmp.push_back(board[xy][xy]);
    }
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    if (tmp.size() == 2) win_team.push_back(make_tuple(tmp[0] > tmp[1] ? tmp[1] : tmp[0], tmp[0] > tmp[1] ? tmp[0] : tmp[1]));

    for (int x = 0; x < 3; x++){
        tmp.clear();
        for (int y = 2; y >= 0; y--){
            tmp.push_back(board[x][y]);
        }
        sort(tmp.begin(), tmp.end());
        tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
        if (tmp.size() == 2) win_team.push_back(make_tuple(tmp[0] > tmp[1] ? tmp[1] : tmp[0], tmp[0] > tmp[1] ? tmp[0] : tmp[1]));
    }

    set<tuple<int,int>> s(win_team.begin(), win_team.end());
    cout << s.size();

    return 0;
}