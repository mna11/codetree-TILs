#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, result(0);
    vector<int> arr;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                if (arr[i] <= arr[j] && arr[j] <= arr[k]) result++;
            }
        }
    }

    cout << result;
    return 0;
}