#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int n, min_length(INT_MAX), length;
string str;
bool check[101];

int main() {
    cin >> n;
    cin >> str;

    for (int i = 0; i < str.length(); i++){
        for (int j = 1; j <= n / 2; j++){
            string sub_str = str.substr(i, j);
            for (int k = i + j; k <= n - j; k++){
                string sub_str2 = str.substr(k, j);
                if (!sub_str.compare(sub_str2)) check[j] = true;
            }
        }
    }
    for (int i = 1;  i <= n/2; i++) {
        if(!check[i]) min_length = min(min_length, i);
    }
    if (min_length == INT_MAX) min_length = n/2 + 1;
    cout << min_length;
    return 0;
}