#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;
    int Q, iInput(0);
    cin >> Q;
    while (Q--) {
        cin >> iInput; 
        switch (iInput) {
            case 1:
                str = str.substr(1, str.size()-1) + str.substr(0, 1);
                cout << str << endl;
                break;
            case 2:
                str = str.substr(str.size()-1, 1) + str.substr(0, str.size()-1);
                cout << str << endl;
                break;
            case 3:
                reverse(str.begin(), str.end()); 
                cout << str << endl; 
                break;
            default :
                break;
        }
    }
    return 0;
}