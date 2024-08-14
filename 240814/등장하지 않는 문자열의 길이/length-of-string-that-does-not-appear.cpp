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
    check[0] = true;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = 1; k <= n; k++){
                if (i + k > n || j + k > n) break;
                string sub_str_1 = str.substr(i, k);
                string sub_str_2 = str.substr(j, k);
                if (!sub_str_1.compare(sub_str_2)) check[k] = true;
            }
        }
    }

    while(check[length]){
        min_length = ++length;
    }
    cout << min_length;
    return 0;
}