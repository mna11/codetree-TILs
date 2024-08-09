#include <iostream>
#include <vector>
#include <tuple>

#define MAX_X 100

using namespace std;

int n(0), a(0), b(0), cnt(0);
vector<tuple<int, int>> segments;

bool NoOverlap(int i1, int i2, int i3){
    int x1, x2;
    int line[MAX_X + 1] = {};

    for (int i = 0; i < n; i++){
        if (i == i1 || i == i2 || i == i3) continue;
        
        tie(x1, x2) = segments[i];
        for (int i = x1; i <= x2; i++) {
            if (line[i] != 0) return false;
            line[i]++;
        }
    }
    return true;
}



int main() {

    //init
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        segments.push_back(make_tuple(a, b));
    }

    //solve
    for (int i = 0; i < n - 2; i++){
        for (int j = i + 1; j < n - 1; j++){
            for (int k = j + 1; k < n; k++){
                if(NoOverlap(i, j, k)) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}