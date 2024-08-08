#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define MAX_TIME 1000
using namespace std;

vector<vector<int>> service_time;
int n, A, B, max_working_time(INT_MIN); 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> tmp;
        cin >> A >> B;
        tmp.push_back(A);
        tmp.push_back(B);
        service_time.push_back(tmp);
    }

    for (int i = 0; i < n; i++){
        int time_table[MAX_TIME + 1] = {0,};
        int working_time(0);

        for (int j = 0; j < n; j++){
            if (i == j) continue;
            for (int k = service_time[j][0]; k < service_time[j][1]; k++) time_table[k]++;
        }
        for (int j = 1; j <= MAX_TIME; j++){
            if (time_table[j] > 0) working_time++;
        }
        max_working_time = max(max_working_time, working_time);
    }

    cout << max_working_time;
    return 0;
}