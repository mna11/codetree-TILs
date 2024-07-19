#include <iostream>
#include <string>

using namespace std;

string s1;
string s2;
int Func(){
    return s1.substr(s2);
}

int main() {
    cin >> s1;
    cin >> s2;
    cout << Func();
    return 0;
}