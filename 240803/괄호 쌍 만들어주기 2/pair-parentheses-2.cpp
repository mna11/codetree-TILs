#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int cnt(0);

    cin >> str;

    for (int i = 0; i < str.length() - 3; i++){ // ()) 자리 마련을 위해 - 3
        for (int j = i + 2; j < str.length() - 1; j++) { // ) 자리 마련을 위해 - 1
            string open_pare = str.substr(i, 2);
            string close_pare = str.substr(j, 2);
            if (!open_pare.compare("((") && !close_pare.compare("))")) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}