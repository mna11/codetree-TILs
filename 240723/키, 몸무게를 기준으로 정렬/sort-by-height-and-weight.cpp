#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    tuple<int, int, string>* t;
    string name;
    int height, weight;

    cin >> n;
    t = new tuple<int, int, string>[n];
    for (int i = 0; i < n; i++){
        cin >> name >> height >> weight;
        t[i] = make_tuple(height, -weight, name);
    }
    sort(t, t + n);
    for (int i = 0; i < n; i++){
        tie(height, weight, name) = t[i];
        cout << name << " " << height << " " << -weight << endl;
    }
    delete[] t;
    return 0;
}