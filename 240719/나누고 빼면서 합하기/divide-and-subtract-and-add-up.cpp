#include <iostream>
using namespace std;

int n, m;
int arr[100];

int Func(){
    int result(0);
    for (m; m >= 1; m = m % 2 == 0 ? m/2 : m-1){
        result += arr[m - 1];
    }
    return result;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << Func();
    return 0;
}