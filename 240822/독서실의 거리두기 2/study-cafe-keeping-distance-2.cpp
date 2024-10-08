#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 1000
using namespace std;

int n, length, max_length(INT_MIN), min_length(INT_MAX), seat_add_index;
int seat[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%1d", &seat[i]);

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (i == 0 && seat[i] == 0 && seat[j] == 1){
                length = j - i;
                if (max_length < length){
                    max_length = length;
                    seat_add_index = i;
                }
                break;
            }

            if (seat[i] == 1 && seat[j] == 1) {
                length = (j - i) / 2;
                if (max_length < length){
                    max_length = length;
                    seat_add_index = (i + j) / 2;
                }
                break;
            }

            if (seat[i] == 1 && seat[j] == 0 && j == n-1){
                length = j - i;
                if (max_length < length){
                    max_length = length;
                    seat_add_index = j;
                }
                break;
            }
        }    
    }
    seat[seat_add_index] = 1;

    for (int i = 0; i < n; i++){
        if (seat[i] == 0) continue;
        for (int j = i + 1; j < n; j++){
            if (seat[j] == 0) continue;
            
            if (seat[j] == 1){
                length = j- i;
                min_length = min(min_length, length);
                break;
            }
        }
    }

    cout << min_length;
    return 0;
}