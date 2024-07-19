#include <iostream>
using namespace std;

void Func(int* arr, int n){
    for (int i = 0; i < n; i++){
        if (arr[i] % 2 == 0) arr[i] /= 2;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
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