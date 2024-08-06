#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int n;
int a1, b1, c1;
int a2, b2, c2;
int cnt;

// 두 수의 차이가 2 이하인지 체크 
// 그리고  n + (작은 수 - 큰 수)가 2 이하인지 체크 
bool IsCan(int x, int y){
    return abs(x-y) <= 2 || n + (x < y ? x : y) - (x < y ? y : x) <= 2 ;
}

int main() {
    cin >> n;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            for (int k = 1; k <= n; k++){
                if (IsCan(i, a1) &&
                    IsCan(j, b1) &&
                    IsCan(k, c1)) cnt++;
                else if (IsCan(i, a2) &&
                         IsCan(j, b2) &&
                         IsCan(k, c2)) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}