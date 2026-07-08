#include <iostream>
#include <vector>

using namespace std;

void make_digit(vector<int>& vec, int& N);

int main() {
    int N(0);
    vector<int> vec;
    vec.reserve(20);
    cin >> N;

    make_digit(vec, N);

    for (auto i = vec.rbegin(); i != vec.rend(); ++i)
        cout << *i;

    return 0;
}

void make_digit(vector<int>& vec, int& N) {
    while(true) {
        if (N < 2){
            vec.push_back(N);
            break;
        }

        vec.push_back(N%2);
        N /= 2;
    }
}