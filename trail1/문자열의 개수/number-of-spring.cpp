#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> sVec;
    while(true) {
        string str;
        cin >> str;
        if (str.compare("0") == 0) break;
        sVec.push_back(str);
    }
    cout << sVec.size() << endl;
    bool bIsOdd(true);
    for (string s : sVec) {
        if (bIsOdd) cout << s << endl;
        bIsOdd = !bIsOdd;
    }
    return 0;
}