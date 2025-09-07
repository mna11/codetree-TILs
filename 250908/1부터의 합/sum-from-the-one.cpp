#include <iostream>
using namespace std;

int main() {
    int N;
    int result = 0;
    cin >> N;
    for (int i = 1; i <= 100; i++){
        if (result + i >= N) break;
        result += i;
    }
    cout << result;
    return 0;
}