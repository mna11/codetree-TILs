#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void OnlyStartT(string*& arr, string& T, int& n, int& cnt){
    for (int i = 0; i < n; i++){
        if (T.compare(arr[i].substr(0, T.length()))){
            arr[i] = "1";
            cnt++;
        }
    }
    sort(arr, arr + n);
}

int main() {
    int n, k, cnt(0);
    string T;
    string* arr;

    cin >> n >> k >> T;

    arr = new string[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    OnlyStartT(arr, T, n, cnt);
    cout << arr[k+cnt-1];
    return 0;
}