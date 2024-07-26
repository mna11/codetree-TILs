#include <iostream>
#include <tuple>

#define BLACK 1
#define WHITE 2
#define OFFSET 100000

using namespace std;

void BlackDir(tuple<int, int, int>* area, int x, int& cur_pos){
    for (int i = cur_pos; i < cur_pos + x; i++){
        int black_count, white_count, last;
        tie(black_count, white_count, last) = area[i];

        if (black_count != 2 || white_count != 2) {
            get<0>(area[i])++;
            get<2>(area[i]) = BLACK;
        }
    }
    cur_pos += (x - 1);
}

void WhiteDir(tuple<int, int, int>* area, int x, int& cur_pos){
    for (int i = cur_pos; i > cur_pos - x; i--){
    int black_count, white_count, last;
        tie(black_count, white_count, last) = area[i];

        if (black_count != 2 || white_count != 2) {
            get<1>(area[i])++;
            get<2>(area[i]) = WHITE;
        }
    }
    cur_pos -= (x - 1);
}

void PrintNumberOfColor(tuple<int, int, int>* area){
    int black(0), white(0), grey(0);
    for (int i = 0; i < 200001; i++){
        int black_count, white_count, last;
        tie(black_count, white_count, last) = area[i];
    
        if (black_count == 2 && white_count == 2) {
            grey++;
            continue;
        }
        if (last == WHITE) white++;
        else if (last == BLACK) black++;
    }
    cout << white << " " << black << " " << grey;
}


int main() {
    tuple<int, int, int> area [200001] = { make_tuple(0, 0, 0), };
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