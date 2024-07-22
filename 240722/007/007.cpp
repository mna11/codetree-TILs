#include <iostream>
#include <string>
#include <tuple>

using namespace std;

// class Spy{
//     public:
//         string s;
//         char c;
//         int n;

//     Spy(string s, char c, int n) : s(s), c(c), n(n) {};
// };

// int main() {
//     string s;
//     char c;
//     int n;
//     cin >> s >> c >> n;

//     Spy spy(s, c, n);
//     cout << "secret code : " << spy.s << endl;
//     cout << "meeting point : " << spy.c << endl;
//     cout << "time : " << spy.n << endl;

//     return 0;
// }

int main(void){
    string s;
    char c;
    int t;

    cin >> s >> c >> t;
    tuple<string, char, int> tup = make_tuple(s, c, t);
    cout << "secret code : " << get<0>(tup) << endl;
    cout << "meeting point : " << get<1>(tup) << endl;
    cout << "time : " << get<2>(tup) << endl;

    return 0;
}