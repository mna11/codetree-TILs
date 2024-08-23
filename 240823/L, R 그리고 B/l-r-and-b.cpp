#include <iostream>
#include <utility>
#include <cmath>

using namespace std;

pair<int, int> L;
pair<int, int> R;
pair<int, int> B;
char input;
int ans;

int main() {
    for (int y = 1; y <= 10; y++){
        for (int x = 1; x <= 10; x++){
            cin >> input;
            if (input == '.') continue;
            else if (input == 'L') L = make_pair(y, x);
            else if (input == 'R') R = make_pair(y, x);
            else if (input == 'B') B = make_pair(y, x);
        }
    }

    if (L.first == R.first && R.first == B.first && 
        ((R.first > L.first && R.first < B.first) ||
         (R.first > B.first && R.first < L.first))) {
        ans = abs(L.second - B.second) + 1;
    }
    else if (L.second == R.second && R.second == B.second && 
            ((R.second > L.second && R.second < B.second) ||
            (R.second > B.second && R.second < L.second))){
        ans = abs(L.first - B.first) + 1;
    }
    else {
        ans = abs(L.first - B.first) + abs(L.second - B.second) - 1;
    }

    cout << ans;
    return 0;
}