#include <iostream>
#include <algorithm>

using namespace std;

int arr[4];

int main() {
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr + 4);
    cout << arr[3] - arr[0];
    return 0;
}