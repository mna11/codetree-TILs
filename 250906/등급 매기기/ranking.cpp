#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int score;
    cin >> score;
    score /= 10;
    score -= 9;
    score = abs(score);
    cout << (char)(65 + score) << endl;
    return 0;
}