#include <iostream>
using namespace std;

int main() {
    int N, a, b;
    int result = 0;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> a >> b;
        result = 0;

        for (int j = a; j <= b; j++){
            if (j % 2 == 0) result += j;
        }
        cout << result << '\n';
    }
    return 0;
}