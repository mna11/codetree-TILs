#include <iostream>
#include <string>

using namespace std;

class Player{
public:
    string id;
    int level;
    Player(string ida = "codetree", int levela = 10) : id(ida), level(levela) {};
};

int main() {
    string s;
    int level;
    cin >> s >> level;
    Player p1;
    Player p2(s, level);

    cout << "user " << p1.id << " lv " << p1.level << endl;
    cout << "user " << p2.id << " lv " << p2.level << endl;
    return 0;
}