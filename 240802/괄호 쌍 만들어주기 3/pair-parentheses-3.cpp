#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int result(0);

    cin >> str;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ')') continue;

        for (int j = i + 1; j < str.length(); j++){
            if (str[j] == ')') {
                result++;
            }
        }
    }
    cout << result;
    return 0;
}