#include <iostream>
using namespace std;

void PrintNumSquare(int n){
    int num = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << num << " ";
            num = (num+1) % 10;
            if (num == 0) num++;
        }
        cout << endl;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    PrintNumSquare(n);
    return 0;
}