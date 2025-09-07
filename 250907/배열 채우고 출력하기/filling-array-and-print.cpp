#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<char, 10> arr;
    for (int i = 0; i < 10; i++) cin >> arr[i];
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < 10; i++) cout << arr[i];
    return 0;
}