#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> vec(3);
    for (int i = 0; i < 3; ++i)
        cin >> vec[i];

    int iCnt(0);
    for (int a = 1; a <= N; ++a){
        for (int b = 1; b <= N; ++b){
            for (int c = 1; c <= N; ++c) {
                if (abs(a - vec[0]) <= 2
                    || abs(b - vec[1]) <= 2
                    || abs(c - vec[2]) <= 2)
                        ++iCnt;
            }   
        }
    }

    cout << iCnt;
    return 0;
}