#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>

using namespace std;

// 1번쨰 for문 - 2배할 하나의 인덱스 정하고 2배하기 / 0 ~ n까지
// 2번쨰 for문 - 제거할 하나의 인덱스 정하기 / 0 ~ n 까지
// 3번째 for문 - 인접한 숫자간의 차의 합 더하기 / 0 ~ n-2

int n, min_dif_sum(INT_MAX), dif_sum;
vector<int> arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for (int i = 0; i < n; i++){
        vector<int> tmp;
        arr[i] *= 2;
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            tmp.clear();
            dif_sum = 0;

            for (int k = 0; k < n; k++){
                if (k == j) continue;
                tmp.push_back(arr[k]);
            }
            for (int k = 0; k < n - 2; k++) dif_sum += abs(tmp[k + 1] - tmp[k]);
            min_dif_sum = min(min_dif_sum, dif_sum);
        }
        arr[i] /= 2;
    }

    cout << min_dif_sum;
    return 0;
}