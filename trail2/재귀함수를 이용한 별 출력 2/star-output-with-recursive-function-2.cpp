#include <iostream>
using namespace std;

void PrintStart(int n) {
    if (n == 0) return; 
    for (int i = 0; i < n; ++i){
        cout << "* ";
    }
    cout << endl;
    PrintStart(n-1);
    for (int i = 0; i < n; ++i){
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    PrintStart(n);
    return 0;
}