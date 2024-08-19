#include <iostream>

using namespace std;

int x[4];
bool intersect(false);

int main() {
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    for (int i = 0; i < 4; i++){
        if (i < 2 && x[i] >= x[2] && x[i] <= x[3]) intersect = true;
        else if (i >= 2 && x[i] >= x[0] && x[i] <= x[1]) intersect = true;
    }

    if (intersect) cout << "intersecting";
    else cout << "nonintersecting";
    return 0;
}