#include <iostream>
#include <array> 
#include <algorithm>

using namespace std;

int main() {
    array<int, 3> nums;
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums.begin(), nums.end());
    cout << nums[1];

    return 0;
}