#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr = {3, 1, 4, 5, 9};
    cout << arr[1] + arr[3] + arr[4];
    return 0;
}