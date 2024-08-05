#include <iostream>
#include <vector>

using namespace std;

int n, cnt;
vector<double> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        double x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            double sum(0);
            double avg;
            for (int k = i; k <= j; k++) sum += arr[k];
            avg = sum / (j - i + 1);
            for (int k = i; k <= j; k++) {
                if (arr[k] == avg){
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}