#include <iostream>
#include <cmath>
using namespace std;

char getGrade(int score){
    score /= 10;
    if (score == 10) return 'A';
    score -= 9;
    score = abs(score);
    if (score >= 4) return 'F';
    else return (char)('A' + score);
}


int main() {
    int score;
    cin >> score;
    for (int s = score; s <= 100; s++){
        cout << getGrade(s) << ' ';
    }
    return 0;
}