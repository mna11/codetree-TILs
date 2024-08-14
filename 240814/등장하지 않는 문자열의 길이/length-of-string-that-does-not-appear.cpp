#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int n, max_length(INT_MIN), length;
string str;
bool check[101];

int main() {
    cin >> n;
    cin >> str;

    for (int i = 0; i < str.length(); i++){
        for (int j = 1; j <= n - j; j++){
            string sub_str = str.substr(i, j);
            for (int k = i + j; k <= n - j; k++){
                string sub_str2 = str.substr(k, j);
                if (!sub_str.compare(sub_str2)) check[j] = true;
            }
            if (!check[j]) max_length = max(max_length, j);
        }
    }
    if (max_length == INT_MIN) max_length = n/2 + 1;
    cout << max_length;
    return 0;
}