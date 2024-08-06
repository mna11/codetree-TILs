#include <iostream>
#include <algorithm>

#define MAX_N 100
#define NONE 0
#define G 1
#define H 2

using namespace std;

int main() {
    int n, max_range(0), range;
    int arr[MAX_N + 1] = {0,};
    
    cin >> n;
    for (int i = 0; i < n; i++){
        int pos;
        char x;
        cin >> pos >> x;
        arr[pos] = x - 'F';
    }

    // 모든 시작점을 체크한다. 
    // 모든 범위를 체크한다. 
    // 만약 범위를 체크하던 중, 값과 다른게 나온다면 break -> max 체크 
    for (int i = 0; i <= MAX_N; i++){
        if (arr[i] == NONE) continue;
        for (int j = i + 1; j <= MAX_N; j++){
            if (arr[i] != arr[j]) {
                range = j - i - 1;
                break;
            }
        }
        max_range = max(max_range, range);
    }

    for (int i = 0; i <= MAX_N; i++){
        int cnt_g(0), cnt_h(0);
        for (int j = i; j <= MAX_N; j++){
            if (arr[j] == NONE) continue;
            else if (arr[j] == G) cnt_g++;
            else if (arr[j] == H) cnt_h++;

            if (cnt_g == cnt_h) {
                range = j - i - 1;
                max_range = max(max_range, range);
            }
        }
    }

    cout << max_range;
    return 0;
}