#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <set>

using namespace std;

int board[3][3];
set<int> tmp;
set<tuple<int, int>> win_team;


int main() {
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%1d", &board[i][j]);
        }
    }

    for (int x = 0; x < 3; x++){
        tmp.clear();
        for (int y = 0; y < 3; y++){
            tmp.insert(board[x][y]);
        }
        if (tmp.size() == 2) win_team.insert(make_tuple(*tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() + 1 : *tmp.begin(), *tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() : *tmp.begin() + 1));
    }

    for (int y = 0; y < 3; y++){
        tmp.clear();
        for (int x = 0; x < 3; x++){
            tmp.insert(board[x][y]);
        }
        if (tmp.size() == 2) win_team.insert(make_tuple(*tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() + 1 : *tmp.begin(), *tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() : *tmp.begin() + 1));
    }

    tmp.clear();
    for (int xy = 0; xy < 3; xy++) tmp.insert(board[xy][xy]);
    if (tmp.size() == 2) win_team.insert(make_tuple(*tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() + 1 : *tmp.begin(), *tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() : *tmp.begin() + 1));

    for (int x = 0; x < 3; x++){
        tmp.clear();
        for (int y = 2; y >= 0; y--){
            tmp.insert(board[x][y]);
        }
        if (tmp.size() == 2) win_team.insert(make_tuple(*tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() + 1 : *tmp.begin(), *tmp.begin() > *tmp.begin() + 1 ? *tmp.begin() : *tmp.begin() + 1));
    }

    cout << win_team.size();

    return 0;
}