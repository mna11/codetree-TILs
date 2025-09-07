#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int A, B;
    vector<int> vec;
    cin >> A >> B;
    vec.push_back(A); vec.push_back(B);
    for (int i = 2; i < 10; i++){
        int present = (vec[i-2] + vec[i-1])%10;
        vec.push_back(present);
    }
    for (int i : vec){
        cout << i << ' ';
    }
    return 0;
}