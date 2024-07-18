#include <iostream>
using namespace std;


bool func(int* arr1, int* arr2, int n1, int n2){
    int cur(0); // 더 큰 친구의 현재 비교 위치
    int p(0);
    if (n1 < n2){
        for (int i = 0; i < n1; ){
            if (cur == n2) break;
            if (p == n1) break;

            if (arr1[i] == arr2[cur]) {
                cur++;
                p++;
                i++;
            }
            else{
              i = p = 0;
              cur++;
            }
        }
        if (p == n1) return true;
        else return false;
    }
    else {
        for (int i = 0; i < n2; ){
            if (cur == n1) break;
            if (p == n2) break;
            if (arr2[i] == arr1[cur]) {
                cur++;
                p++;
                i++;
            }
            else{
              i = p = 0;
              cur++;
            }
        }
        if (p == n2) return true;
        else return false;
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    int *arr1, *arr2;
    cin >> n1 >> n2;
    arr1 = new int[n1];
    arr2 = new int[n2];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    if (func(arr1, arr2, n1, n2)) cout << "Yes";
    else cout << "No";

    delete[] arr1;
    delete[] arr2;
    return 0;
}