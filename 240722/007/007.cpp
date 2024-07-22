#include <iostream>
#include <string>

using namespace std;

class Spy{
    public:
        string s;
        char c;
        int n;

    Spy(string s, char c, int n) : s(s), c(c), n(n) {};
};

int main() {
    string s;
    char c;
    int n;
    cin >> s >> c >> n;

    Spy spy(s, c, n);
    cout << "secret code : " << spy.s << endl;
    cout << "meeting point : " << spy.c << endl;
    cout << "time : " << spy.n << endl;

    return 0;
}