#include <iostream>
#define OFFSET 100

using namespace std;


struct Rectangle {
    int x1;
    int y1;
    int x2; 
    int y2;
};

int main() {
    int N(0);
    cin >> N;

    int x1, y1, x2, y2; 

    Rectangle** pArray = new Rectangle*[N];
    for (int i = 0; i < N; ++i){
        cin >> x1 >> y1 >> x2 >> y2;
        pArray[i] = new Rectangle{x1, y1, x2, y2};
    }

    bool** pBarray = new bool*[201];
    for (int i = 0; i < 201; ++i) {
        pBarray[i] = new bool[201] {false};
    }


    for (int i = 0; i < N; ++i) {
        // 구조적 바인딩
        auto& [x1, y1, x2, y2] = *pArray[i];
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;
        for (int y = y1; y < y2; ++y) {
            for (int x = x1; x < x2; ++x) {
                pBarray[y][x] = true;
            }
        }
    }

    int area(0);
    for (int i = 0; i < 201; ++i){
        for (int j = 0; j < 201; ++j) {
            if (pBarray[i][j] == true) ++area;
        }
    }


    for (int i = 0; i < 201; ++i) {
        delete[] pBarray[i];
    }

    for (int i = 0; i < N; ++i){
        delete pArray[i];
    }

    delete[] pBarray;
    pBarray = nullptr;
    delete[] pArray;
    pArray = nullptr;


    cout << area;

    return 0;
}