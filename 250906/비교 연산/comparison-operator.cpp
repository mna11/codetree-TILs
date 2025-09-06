#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    cout << (int)(A >= B) << '\n';
    cout <<  (int)(A > B) << '\n';
    cout << (int)(B >= A) << '\n';
    cout <<  (int)(B > A) << '\n';
    cout <<  (int)(A == B) << '\n';
    cout <<  (int)(A != B) << '\n';
    return 0;
}