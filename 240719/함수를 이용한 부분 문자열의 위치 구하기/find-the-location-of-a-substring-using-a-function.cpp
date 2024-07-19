#include <iostream>
#include <string>

using namespace std;

string s1;
string s2;

bool SubFunc(int n){
    for (int i = n; i < n + s2.length(); i++){
        if (s1[i] != s2[i-n]) return false;
    }
    return true;
}

int Func(){
    for (int i = 0; i < s1.length() - s2.length() + 1; i++){
        if(SubFunc(i)) return i;
    }
    return -1;
}

int main() {
    cin >> s1;
    cin >> s2;
    cout << Func();
    return 0;
}