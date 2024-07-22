#include <iostream>
#include <string>

using namespace std;

class Bomb{
public:
    string code;
    int time;
    char color;
    Bomb(string s, char c, int t) : code(s), color(c), time(t) {};
};

int main() {
    string str;
    int t;
    char c;

    cin >> str >> c >> t;
    Bomb b = Bomb(str, c, t);
    cout << "code : " << b.code << endl;
    cout << "color : " << b.color << endl;
    cout << "second : " << b.time << endl;
    return 0;
}