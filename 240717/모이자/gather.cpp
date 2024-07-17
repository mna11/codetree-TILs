#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    int min_time = INT_MAX;
    int time;
    int arr[100];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++){
        time = 0;
        for (int j = 0; j < n; j++){
            time += arr[j] * abs(j-i);
        }
        min_time = min(min_time, time);
    }
    cout << min_time;
    return 0;
}