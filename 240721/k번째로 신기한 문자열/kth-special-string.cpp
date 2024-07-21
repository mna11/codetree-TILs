#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void OnlyStartT(vector<string>& arr, string& T){
    vector<string>::iterator iter;
    for (iter = arr.begin(); iter != arr.end(); iter++){
        if (T.compare((*iter).substr(0, T.length()))){
            arr.erase(iter);
            iter--;
        }
    }
    sort(arr.begin(), arr.end());
}

int main() {
    int n, k;
    string T, tmp;
    vector<string> arr;

    cin >> n >> k >> T;
    arr.resize(n);

    for (int i = 0; i < n; i++){
        cin >> tmp;
        arr.push_back(tmp);
    }
    OnlyStartT(arr, T);
    cout << arr[k-1];
    return 0;
}