#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int x, y, cnt;

int main() {
    cin >> x >> y;
    for (int i = x; i <= y; i++){
        bool palindrome(true);
        string str1 = to_string(i);
        string str2(str1);
        reverse(str2.begin(), str2.end());
        if (str1.compare(str2)) palindrome = false;
        if (palindrome) cnt++;
    }
    cout << cnt;

    return 0;
}