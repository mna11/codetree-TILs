#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N(0);
    vector<int> A;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int Ai(0);
        cin >> Ai;
        A.push_back(Ai);
    }
    int min_v = INT_MAX;

    for (int i = 0; i < N; ++i)
    {
        int distance(0);
        for (int j = 0; j < N; ++j)
        {
            distance += abs(i - j) * A[j];
        }
        min_v = min(min_v, distance);
    }
    cout << min_v << flush;
    return 0;
}