#include <iostream>
using namespace std;

int MaxValArr(int arr[], int n, int len, int max){
    if (n == len) return max;
    if (max < arr[n]) max = arr[n];
    return MaxValArr(arr, n+1, len, max);
}

int main() {
    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << MaxValArr(arr, 0, n, 0);
    return 0;
}