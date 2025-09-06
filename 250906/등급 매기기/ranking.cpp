#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int score;
    cin >> score;
    score /= 10;
    score -= 9;
    score = abs(score);
    if (score <= 4)cout << (char)(65 + score) << endl;
    else cout << "F" << endl;
    return 0;
}