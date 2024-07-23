#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;
 
int main() {
    int n, height, weight, num(1);
    tuple<int, int, int>* t;

    cin >> n;
    t = new tuple<int, int, int>[n];
    for (int i = 0; i < n; i++){
        cin >> height >> weight;
        t[i] = make_tuple(height, -weight, num++);
    }
    sort(t, t+n);
    for (int i = 0; i < n; i++){
        tie(height, weight, num) = t[i];
        weight *= -1;

        cout << height << " " << weight << " " << num << endl;
    }
    delete[] t;
    return 0;
}