#include <iostream>
#include <array>
using namespace std;

int main() {
    array<array<int, 2>, 2> score;
    array<int, 2> A, B;
    cin >> A[0] >> A[1];
    cin >> B[0] >> B[1];
    score[0] = A;
    score[1] = B;

    if (score[0][0] > score[1][0] && score[0][1] > score[1][1]) cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}