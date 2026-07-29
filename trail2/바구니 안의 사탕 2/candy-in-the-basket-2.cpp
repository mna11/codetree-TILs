#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N(0), K(0);
    cin >> N >> K;
    vector<int> vec(101, 0);
    int iCandyNum(0), iCor(0); 
    for (int i = 0; i < N; ++i){
        cin >> iCandyNum;
        cin >> iCor;
        vec[iCor] += iCandyNum;
    }

    int iMax(INT_MIN);
    for (int c = K; c <= 100 - K; ++c)
    {
        int iCandy(0);
        for (int t = c - K; t <= c + K; ++t)
        {
            iCandy += vec[t];
        }
        iMax = max(iMax, iCandy);
    }
    if (100 < K*2) {
        iMax = 0;
        for_each(vec.begin(), vec.end(), [&iMax](const int& v){
            iMax += v;
        });
    }
    cout << iMax;


    return 0;
}