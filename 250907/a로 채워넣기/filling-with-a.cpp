#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; 
    string strAnswer;
    cin >> str;
    strAnswer = str.substr(0, 1) + 'a' + str.substr(2, str.length() - 4) + 'a' + str.substr(str.length() - 1);

    cout << strAnswer;
    return 0;
}