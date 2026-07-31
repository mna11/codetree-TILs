#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> ability(6);

int main() {
    for (int i = 0; i < 6; i++) {
        cin >> ability[i];
    }

    sort(ability.begin(), ability.end());
    int A = ability[0] + ability[5];
    int B = ability[1] + ability[4]; 
    int C = ability[2] + ability[3];
    int iMax = max({ A, B, C});
    int iMin = min({A, B, C});
    cout << iMax - iMin;

    return 0;
}