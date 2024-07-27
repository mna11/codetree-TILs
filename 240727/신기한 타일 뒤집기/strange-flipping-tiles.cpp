#include <iostream>
#define OFFSET 100000
#define NONE 0
#define BLACK 1
#define WHITE 2

using namespace std;

void BlackDir(int* tilemap, int& cur_pos, int x){
    for (int i = cur_pos; i < cur_pos + x; i++){
        if (tilemap[i] == NONE || tilemap[i] == WHITE) tilemap[i] = BLACK;
    }
    cur_pos += x - 1;
}

void WhiteDir(int* tilemap, int& cur_pos, int x){
    for (int i = cur_pos; i > cur_pos - x; i--){
        if (tilemap[i] == NONE || tilemap[i] == BLACK) tilemap[i] = WHITE;
    }
    cur_pos -= x - 1;
}

int main() {
    int tilemap[200001] = {0, };
    int n, x, cur_pos(OFFSET);
    char dir;
    int black(0), white(0);

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> dir;
        if (dir == 'R') BlackDir(tilemap, cur_pos, x);
        else WhiteDir(tilemap, cur_pos, x);
    }

    for (int i = 0; i < 200001; i++){
        if (tilemap[i] == BLACK) black++;
        else if (tilemap[i] == WHITE) white++;
    }
    cout << white << " " << black;
    return 0;
}