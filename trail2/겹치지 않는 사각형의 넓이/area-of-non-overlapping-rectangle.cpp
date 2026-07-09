#include <iostream>
#include <algorithm>

#define OFFSET 1000

using namespace std;

enum class RecName {
  NONE = -1,
  A,
  B,
  M,
  LAST
};

struct Rectangle {
    int x1;
    int y1;
    int x2;
    int y2;
    Rectangle(int _x1, int _y1, int _x2, int _y2)
        : x1(_x1), y1(_y1), x2(_x2), y2(_y2) {}
};

int main() {
    int x1, y1, x2, y2;
    Rectangle** pArray = new Rectangle*[static_cast<int>(RecName::LAST)];
    for (int i = 0; i < static_cast<int>(RecName::LAST); ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        pArray[i] = new Rectangle(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
    }
    int** pbArray = new int*[OFFSET*2 + 1];
    for (int i = 0; i < OFFSET*2 + 1; ++i){
        pbArray[i] = new int[OFFSET*2 + 1];
        fill(pbArray[i], pbArray[i] + OFFSET*2 + 1, static_cast<int>(RecName::NONE));
    }

    for (int i = 0; i < static_cast<int>(RecName::LAST); ++i) 
    {
        auto& [x1, y1, x2, y2] = *pArray[i];
        for (int y = y1; y < y2; ++y){
            for (int x = x1; x < x2; ++x) {
                pbArray[y][x] = i;
            }
        }
    }
    
    int area(0);
    for (int i = 0; i < OFFSET*2 + 1; ++i){
        for (int j = 0; j < OFFSET*2 + 1; ++j){
            if (pbArray[i][j] != static_cast<int>(RecName::NONE)
                && pbArray[i][j] != static_cast<int>(RecName::M)){
                ++area;
            }
        }
    }

    cout << area;


    for (int i = 0; i < OFFSET*2 + 1; ++i){
        delete[] pbArray[i];
    }
    delete[] pbArray;
    pbArray = nullptr;

    for (int i = 0; i < static_cast<int>(RecName::LAST); ++i) {
        delete pArray[i];
    }
    delete[] pArray;
    pArray = nullptr;

    return 0;
}