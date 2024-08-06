#include <iostream>
#include <cmath>

using namespace std;

int N;
int a,b,c, cnt;

int main() {
    cin >> N >> a >> b >> c;
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N; j++){
            for (int k = 1; k <= N; k++){
                if (abs(a-i) <= 2 || 
                    abs(b-j) <= 2 ||
                    abs(c-k) <= 2) cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}