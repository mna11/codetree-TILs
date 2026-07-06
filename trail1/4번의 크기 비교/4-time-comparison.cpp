#include <iostream>
using namespace std;

int main() {
    int A(0);
    cin >> A;
    int N(4);
    while(N--){
        int B;
        cin >> B;
        cout << (A > B) << endl;
    }
    return 0;
}