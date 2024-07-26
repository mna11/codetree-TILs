#include <iostream>
#include <tuple>

#define BLACK 1
#define WHITE 2
#define OFFSET 100000

using namespace std;

class Tile{
public:
    int black_count;
    int white_count;
    int last;
    Tile() : black_count(0), white_count(0), last(0) {};
};

void BlackDir(Tile* area, int x, int& cur_pos){
    for (int i = 0; i < x; i++){
        if (area[cur_pos].black_count != 2 || area[cur_pos].white_count != 2) {
            area[cur_pos].black_count++;
            area[cur_pos].last = BLACK;
        }
        cur_pos++;
    }
    cur_pos--;
}

void WhiteDir(Tile* area, int x, int& cur_pos){
    for (int i = 0; i < x; i++){
        if (area[cur_pos].black_count != 2 || area[cur_pos].white_count != 2) {
            area[cur_pos].white_count++;
            area[cur_pos].last = WHITE;
        }
        cur_pos--;
    }
    cur_pos++;
}

void PrintNumberOfColor(Tile* area){
    int black(0), white(0), grey(0);
    for (int i = 0; i < 200001; i++){
        if (area[i].black_count == 2 && area[i].white_count == 2) {
            grey++;
            continue;
        }
        if (area[i].last == WHITE) white++;
        else if (area[i].last == BLACK) black++;
    }
    cout << white << " " << black << " " << grey;
}


int main() {
    Tile area [200001];
    int n, x, cur_pos(OFFSET);
    char dir;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> dir;
        if (dir == 'R') BlackDir(area, x, cur_pos);
        else if (dir == 'L') WhiteDir(area, x, cur_pos);
    }   
    PrintNumberOfColor(area);

    return 0;
}