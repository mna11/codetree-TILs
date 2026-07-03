#include <iostream>
#include <string>
using namespace std;

int main() {
    int N; 
    string grade;
    cin >> N;
    if (N >= 90) grade = "A";
    else if (N >= 80) grade = "B";
    else if (N >= 70) grade = "C";
    else if (N >= 60) grade = "D";
    else grade = "F";

    cout << grade;
    return 0;
}