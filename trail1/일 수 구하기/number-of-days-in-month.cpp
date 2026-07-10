#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {31, 28, 31,30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n(0);
    cin >> n;
   cout <<  vec[n-1];
    return 0;
}