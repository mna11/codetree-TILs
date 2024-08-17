#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <set>

using namespace std;

int board[3][3];
vector<int> tmp;
vector<tuple<int, int>> win_team;

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

    tmp.clear();
    for (int xy = 0; xy < 3; xy++){
        tmp.push_back(board[xy][2-xy]);
    }
    sort(tmp.begin(), tmp.end());
    tmp.erase(unique(tmp.begin(), tmp.end()), tmp.end());
    if (tmp.size() == 2) win_team.push_back(make_tuple(tmp[0] > tmp[1] ? tmp[1] : tmp[0], tmp[0] > tmp[1] ? tmp[0] : tmp[1]));

    //sort(win_team.begin(), win_team.end());
    //win_team.erase(unique(win_team.begin(), win_team.end()), win_team.end());
    set<tuple<int,int>> s(win_team.begin(), win_team.end());
    cout << win_team.size();

    return 0;
}