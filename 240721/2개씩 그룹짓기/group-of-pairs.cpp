#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int Solve(int*& arr, int n){
    int max_val = INT_MIN;
    sort(arr, arr + n*2);
    for (int i = 0; i < n; i++){
       max_val = max(max_val, arr[i] + arr[(2*n-1) - i]);
    }
    return max_val;
}

int main() {
    int n;
    int* arr;

    cin >> n;
    arr = new int[n*2];
    for (int i = 0; i < n * 2; i++) cin >> arr[i];

    cout << Solve(arr, n);
    delete[] arr;
    return 0;
}