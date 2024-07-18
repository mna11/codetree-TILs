#include <iostream>
using namespace std;

bool SubFunc(int* longer_arr, int* shorter_arr, int longer_len, int shorter_len){
    int longer_cur(0);
    int shorter_cur(0);
    int p(0);
    while(shorter_cur < shorter_len){
        if (longer_cur == longer_len) break;
        if (p == shorter_len) break;

        if (shorter_arr[shorter_cur] == longer_arr[longer_cur]){
            longer_cur++;
            shorter_cur++;
            p++;
        }
        else {
            shorter_cur = 0;
            p = 0;
            longer_cur++;
        }
    }
    if (p == shorter_len) return true;
    else return false;
}

bool IsSubSeq(int* arr1, int* arr2, int n1, int n2){
    if (n1 <= n2){
        return SubFunc(arr2, arr1, n2, n1);
    }
    else {
        return SubFunc(arr1, arr2, n1, n2);
    }
}


int main() {
    int n1, n2;
    int *arr1, *arr2;
    cin >> n1 >> n2;
    arr1 = new int[n1];
    arr2 = new int[n2];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    if (IsSubSeq(arr1, arr2, n1, n2)) cout << "Yes";
    else cout << "No";

    delete[] arr1;
    delete[] arr2;
    return 0;
}