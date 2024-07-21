#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];
    for (int i = 0 ; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}