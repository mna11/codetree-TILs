#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) cin >> grid[i][j];

    // Please write your code here.
    int max_val = INT_MIN;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N - 2; ++j)
        {
            max_val = max(max_val, grid[i][j] + grid[i][j+1] + grid[i][j+2]); 
        }
    }

    cout << max_val;
    return 0;
}