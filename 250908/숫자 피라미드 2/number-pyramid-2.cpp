#include <iostream>
using namespace std;

int main() {
    int N;
    int num = 1;
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j =0; j <= i; j++) cout << num++ << ' ';
        cout << '\n';
    }
    return 0;
}