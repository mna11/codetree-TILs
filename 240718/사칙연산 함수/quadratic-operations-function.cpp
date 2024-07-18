#include <iostream>
using namespace std;

int plusa(int a, int b){
    return a + b;
}

int minusa(int a, int b){
    return a - b;
}

int mula(int a, int b){
    return a * b;
}

int diva(int a, int b){
    return (int)(a/b);
}

int func(int a, int b, int o){
    if (o == '+') return plusa(a, b);
    else if (o == '-') return minusa(a, b);
    else if (o == '*') return mula(a, b);
    else return diva(a, b);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;
    if ((o != '+') && (o != '-') && (o != '*') && (o != '/')) {
        cout << "False";
        return 0;
    }

    cout << a << " " << o << " " << c << " = " << func(a,c,o);
    return 0;
}