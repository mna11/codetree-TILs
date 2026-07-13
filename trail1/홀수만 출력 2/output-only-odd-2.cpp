#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> B >> A;
    for (int i = B; i >= A; --i){
        if (i % 2 == 1) cout << i << ' ';
    }
    return 0;
}