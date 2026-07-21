#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N(0);
    cin >> N;
    vector<int> v;
    v.resize(N);
    for (int i = 0; i < N; ++i)
        cin >> v[i];
    
    int cnt(0);
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                if (v[i] <= v[j] && v[j] <= v[k]) ++cnt;
            }
        }
    }
    cout << cnt;

    return 0;
}