#include <iostream>
using namespace std;

void Swap(int& n, int& m){
    int tmp;
    tmp = n;
    n = m;
    m = tmp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    Swap(n, m);
    cout << n << " " << m;
    return 0;
}