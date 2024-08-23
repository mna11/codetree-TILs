#include <iostream>
#include <string>

using namespace std;

string HOF;
int n, s, ans;
char player;

class Player{
public:
    int ranking;
    int score;
    Player() : ranking(1), score(0) {}
};

bool IsChangedHOF(Player a, Player b, Player c){
    string new_HOF;
    if (a.score == b.score && b.score == c.score) new_HOF = "ABC";
    else if (a.score == b.score && a.score > c.score) new_HOF = "AB";
    else if (a.score == c.score && a.score > b.score) new_HOF = "AC";
    else if (b.score == c.score && b.score > a.score) new_HOF = "BC";
    else if (a.score > b.score && a.score > c.score) new_HOF = "A";
    else if (b.score > a.score && b.score > c.score) new_HOF = "B";
    else if (c.score > a.score && c.score > b.score) new_HOF = "C";

    if (HOF.compare(new_HOF) != 0) {
        HOF = new_HOF;
        return true;
    }
    return false;
}

int main() {
    Player A, B, C;
    HOF = "ABC";
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> player >> s;
        if (player == 'A') A.score += s;
        else if (player == 'B') B.score += s;
        else if (player == 'C') C.score += s;
        
        if (IsChangedHOF(A, B, C)) ans++;
    }
    cout << ans;

    return 0;
}