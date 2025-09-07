#include <string>
#include <iostream>
using namespace std;

int main() {
    string str[5] = {
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange"
    };

    char check;
    int num = 0;

    cin >> check;

    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++){
        if (str[i][2] == check || str[i][3] == check) {
            cout << str[i] << '\n';
            num++;
        }
    }
    cout << num;
    return 0;
}