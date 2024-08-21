#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int x, dist, t, min_time(INT_MAX), nxt_num, last_num;

// n이 주어질 경우, 1 ~ n의 합을 반환하는 함수
int sum_num(int n){
    if (n == 1) return 1;
    return n + sum_num(n-1);
}

int main() {
    cin >> x;

    // i - 이동할때, 가장 큰 수
    // t - 현재 걸린 시간 
    // dist - 현재 이동한 거리 
    // nxt_num - 다음 속도
    // last_num - 현재 속도
    for (int i =  1; i <= x; i++){
        dist = sum_num(i);
        t = i;
        nxt_num = i;
        last_num = i;

        while(dist < x){
            // 다음 속도가 0이 되거나, 1초에 속도를 2m/s 낮출 때, break
            if (nxt_num == 0 || last_num - nxt_num == 2) break;

            if (dist + sum_num(nxt_num) <= x) {
                dist += nxt_num;
                last_num = nxt_num;
                t++;
            }
            else nxt_num--;
        }
        if (last_num == 1 && dist == x) min_time = min(min_time, t);
    } 
    cout << min_time;
    return 0;
}