#include <iostream>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

bool compare(const tuple<string, int, double>& t1, const tuple<string, int, double>& t2){
    return get<1>(t1) > get<1>(t2);
}

int main() {
    tuple<string, int, double> t[5];
    string name;
    int height;
    double weight;

    for (int i = 0; i < 5; i++){
        cin >> name >> height >> weight;
        t[i] = make_tuple(name, height, weight);
    }
    sort(t, t+5);
    cout << "name" << endl;

    for (int i = 0; i < 5; i++){
        tie(name, height, weight) = t[i];
        cout << name << " " << height << " " << weight << endl;
    }
    sort(t, t+5, compare);
    cout << endl;
    cout << "height" << endl;
    for (int i = 0; i < 5; i++){
        tie(name, height, weight) = t[i];
        cout << name << " " << height << " " << weight << endl;
    }

    return 0;
}