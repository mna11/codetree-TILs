#include <iostream>
#include <algorithm>
#include <cmath>

#define MAX_N 1000

using namespace std;

int n, cost, up_down;
int hill[MAX_N];
int tmp[MAX_N];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> hill[i];
    
    sort(hill, hill + n);
    copy(begin(hill), end(hill), begin(tmp));
    
    while(tmp[n-1] - tmp[0] > 17){
        if (up_down % 2 == 0){
            tmp[0]++;
        }
        else {
            tmp[n-1]--;
        }
        up_down++;
        sort(tmp, tmp+n);
    }
    
    for (int i = 0; i < n; i++){
        cost += abs(tmp[i] - hill[i]) * abs(tmp[i] - hill[i]);
    }
    cout << cost;
    return 0;
}