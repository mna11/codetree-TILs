#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int x, y, ans;
int digit_sep_number[7] = {0,}; 

int main() {
    cin >> x >> y;
    for (int i = x; i <= y; i++){
        int same(0), digit(0);
        int check[10] = {0,};

        for (int j = i; j > 0; j/=10) digit_sep_number[digit++] = j % 10;
        for (int j = 0; j < digit; j++) check[digit_sep_number[j]]++;
        sort(check, check + 10, greater<int>());
        if (check[0] == digit - 1) ans++;
    }
    cout << ans;
    return 0;
}