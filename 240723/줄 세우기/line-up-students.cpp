#include <iostream>
#include <algorithm>
#include <functional>
#include <tuple>
using namespace std;

int main() {
    int n;
    int h, w, num(1);
    tuple<int, int, int>* t;
    
    cin >> n;
    t = new tuple<int, int, int>[n];
    for (int i = 0; i < n; i++){
        cin >> h >> w;
        t[i] = make_tuple(h, w, (-1) * num++);
    }

    sort (t, t+n, greater<tuple<int, int, int>>());

    for (int i = 0; i < n; i++){
        tie(h, w, num) = t[i];
        cout << h << " " << w << " " << (-1) * num << endl;
    } 

    delete[] t;
    return 0;
}