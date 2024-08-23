#include <iostream>
using namespace std;

class Player{
public:
    int score;
    int ranking;
    Player() :score(0), ranking(1) {}
};

int n, s, ans;
char player;

int main() {
    Player a, b; // 둘 다 명예의 전당에 오르고 시작 (스코어가 0으로 동일하니)
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> player >> s;
        if(player == 'A') a.score += s;
        else if (player == 'B') b.score += s;

        // 이전 랭킹과 현재 스코어를 기준으로 한 랭킹이 달라진 경우에만 ans++
        // 둘 다 명예의 전당에 오른 경우, a만 오른 경우, b만 오른 경우로 나눠서 고려
        if (a.ranking == 1 && b.ranking == 1){
            if (a.score > b.score) {
                a.ranking = 1;
                b.ranking = 2;
                ans++;
            }
            else if (a.score < b.score){
                a.ranking = 2;
                b.ranking = 1;
                ans++;
            }
        }
        else if (a.ranking < b.ranking){
            if (a.score == b.score){
                a.ranking = b.ranking = 1;
                ans++;
            }
            else if (a.score < b.score){
                a.ranking = 2;
                b.ranking = 1;
                ans++;
            }
        }
        else {
            if (a.score == b.score){
                a.ranking = b.ranking = 1;
                ans++;
            }
            else if (a.score > b.score){
                a.ranking = 1;
                b.ranking = 2;
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}