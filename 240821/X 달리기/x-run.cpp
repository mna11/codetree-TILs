#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int x, dist, t, min_time(INT_MAX), check, last_num;

int fibbo(int n){
    if (n == 0 || n == 1) return 1;
    return n + fibbo(n-1);
}


int main() {
    cin >> x;
    for (int i =  1; i <= x; i++){
        dist = fibbo(i);
        t = i;
        check = i;
        last_num = i;
        while(dist < x){
            if (check == 0 || last_num - check >= 2) break;
            if (dist + fibbo(check) <= x) {
                dist += check;
                last_num = check;
                t++;
            }
            else check--;
        }
        if (last_num == 1 && dist == x) min_time = min(min_time, t);
    }
    cout << min_time;
    return 0;
}