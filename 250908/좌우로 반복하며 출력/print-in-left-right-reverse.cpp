#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++){
        for (int j = N; j >= 1; j--){
            if (i % 2 != 0){
                cout << N - j + 1 << "";
            } else {
                cout << j << "";
            }
        }
        cout << '\n';
    }
    return 0;
}