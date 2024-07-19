#include <iostream>
using namespace std;

int n, m;
int arr[100];

int Func(int a1, int a2){
    int result(0);
    for (a1; a1 <= a2; a1++){
        result += arr[a1];
    }
    return result;
}


int main() {
    int a1, a2;

    cin >> n >> m;
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    for (int i = 0; i < m; i++){
        cin >> a1 >> a2;
        cout << Func(a1-1, a2-1) << endl;
    }

    return 0;
}