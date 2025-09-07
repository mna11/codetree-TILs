#include <iostream>
using namespace std;

int main() {
    int nArr[10];
    int mul3 = 0;
    int mul5 = 0;
    for (int i = 0; i < 10; i++){
        cin >> nArr[i];
        if (nArr[i] % 3 == 0) mul3++;
        if (nArr[i] % 5 == 0) mul5++;
    }

    cout << mul3 << ' ' << mul5 << '\n';
    
    return 0;
}