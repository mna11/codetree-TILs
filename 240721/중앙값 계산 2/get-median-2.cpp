#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int* arr;

    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if((i+1)%2 != 0) {
            sort(arr, arr+i+1);
            cout << arr[i/2] << " ";
        }
    }
    
    return 0;
}