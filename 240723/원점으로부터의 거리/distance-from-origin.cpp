#include <iostream>
#include <cmath>
#include <algorithm>
#include <tuple>

using namespace std;

int main() {
    int n, num(1), x, y, dis;
    tuple<int, int>* t;
    
    cin >> n;
    t = new tuple<int, int>[n];

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        dis = abs(x - 0) + abs(y - 0);

        t[i] = make_tuple(dis, num++);
    }
    sort(t, t+n);

    for (int i = 0; i < n; i++){
        tie(ignore, num) = t[i];
        cout << num << endl;
    }

    delete[] t;
    return 0;
}