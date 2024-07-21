#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string IsSame(int* A, int* B, int n){
    for (int i = 0; i < n; i++){
        if (A[i] != B[i]) return "No";
    }
    return "Yes";
}


int main() {
    int n;
    int *A, *B;

    cin >> n;
    A = new int[n];
    B = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];
    sort(A, A + n);
    sort(B, B + n);
    cout << IsSame(A,B,n);
    delete[] A;
    delete[] B;
    return 0;
}