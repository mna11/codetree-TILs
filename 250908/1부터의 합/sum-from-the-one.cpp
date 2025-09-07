#include <iostream>
using namespace std;

int main() {
    int N;
    int result = 0;
    cin >> N;
    for (int i = 1; i <= 100; i++){
        if (result + i >= N) {
            cout << i;
            break;
        }
        result += i;
    }
    return 0;
}