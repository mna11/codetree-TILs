#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int main() {
    int n, p, sum_distance, min_distance(INT_MAX);
    vector<int> room_person;

    //init
    cin >> n;
    for (int i = 0;i < n; i++){
        cin >> p;
        room_person.push_back(p);
    }

    //solve
    for (int i = 0; i < n; i++){
        sum_distance = 0;
        for (int j = 0; j < n; j++){
            int distance = j - i >= 0 ? j - i : n + (j - i);
            sum_distance += distance * room_person[j];
        }
        min_distance = min(min_distance, sum_distance);
    }

    cout << min_distance;
    return 0;
}