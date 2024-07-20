#include <iostream>
using namespace std;

void PrintHelloWorld(int n){
    if (n == 0) return;
    PrintHelloWorld(n-1);
    cout << "HelloWorld" << endl;
    return;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintHelloWorld(n);
    return 0;
}