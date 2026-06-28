#include <iostream>
#include <string> 

using namespace std;

int main() {
    string str;
    int L(0);
    cin >> str;
    L = str.size(); 
    for (int i = 0; i <= L; ++i) {
        cout << str.substr(L-i, i) << str.substr(0, L-i) << endl;
    }
    return 0;
}