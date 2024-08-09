#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> booms;
int N, K, max_number(-1);

int main() {

    //init
    cin >> N >> K;
    for (int i = 0; i < N; i++){
        int number;
        cin >> number;
        booms.push_back(number);
    }

    //solve
    for (int i = 0; i < N; i++){
        for (int j = i + 1; j <= i + K; j++){
            if (booms[i] != booms[j]) continue;
            max_number = max(max_number, booms[i]);
        }
    }
    cout << max_number;
    return 0;
}