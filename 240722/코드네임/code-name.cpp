#include <iostream>
#include <algorithm>

using namespace std;

class Agent{
public:
    char code;
    int score;
    Agent() {};
    Agent(char c, int s) : code(c), score(s) {};
};

bool comp(const Agent& a, const Agent& b){
    return a.score < b.score;
}


int main() {
    Agent agents[5];
    for (int i = 0; i < 5; i++){
        cin >> agents[i].code >> agents[i].score;
    }
    sort(agents, agents + 5, comp);
    cout << agents[0].code << " " << agents[0].score << endl;
    return 0;
}