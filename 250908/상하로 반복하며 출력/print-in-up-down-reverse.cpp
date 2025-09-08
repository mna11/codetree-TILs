#include <iostream>
using namespace std;

int main() {
    int N;
    int arr[10][10];
    cin >> N;

    for (int col = 0; col < N; col++){
        if (col % 2 == 0){
            for (int row = 0; row < N; row++){
                arr[row][col] = row+1;
            }
        } else {
            for (int row = N-1; row >= 0; row--){
                arr[row][col] = N - row;
            }
        }
    }


    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }
    return 0;
}