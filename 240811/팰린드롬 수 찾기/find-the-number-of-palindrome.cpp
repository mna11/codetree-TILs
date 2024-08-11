#include <iostream>
using namespace std;

int x, y, cnt;
int digit_sep_number[7];

int main() {
    cin >> x >> y;
    for (int i = x; i <= y; i++){
        int digit(0);
        bool palindrome(true);

        for (int j = i; j > 0; j /= 10) digit_sep_number[digit++] = j % 10;
        for (int j = 0; j < digit; j++){
            if (j > digit / 2) break;
            if (digit_sep_number[j] != digit_sep_number[digit-j-1]) {
                palindrome = false;
                break;
            }
        }
        if (palindrome) cnt++;
    }
    cout << cnt;

    return 0;
}