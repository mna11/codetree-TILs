#include <iostream>
#include <cmath>
using namespace std;

void Func(int* arr, int n){
    for (int i = 0; i < n; i++){
        arr[i] = abs(arr[i]);
    }
}

int main() {
    int N;
    int* arr;
    
    cin >> N;
    arr = new int[N];
    for (int i = 0; i < N; i++) 
        cin >> arr[i];

    Func(arr, N);
    for (int i = 0; i < N; i++) 
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}