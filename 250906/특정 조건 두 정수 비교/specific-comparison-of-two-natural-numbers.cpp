#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    printf("%d %d", (int)(A < B), (int)(A == B));
    return 0;
}