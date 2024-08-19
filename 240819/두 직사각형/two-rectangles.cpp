#include <iostream>
#include <string>

using namespace std;

int rect[2][4];
bool bool_overlapping(true);
string str_overlapping("overlapping");

int main() {
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++) cin >> rect[i][j];
    }
    if (rect[0][2] < rect[1][0] || 
        rect[1][2] < rect[0][0] ||
        rect[0][1] > rect[1][3] ||
        rect[1][1] > rect[0][3]) bool_overlapping = false;
    
    if (bool_overlapping) cout << str_overlapping;
    else cout << "non" << str_overlapping;
    
    return 0;
}