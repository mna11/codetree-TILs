#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
public:
    string name;
    int kor;
    int eng;
    int math;
    Student(){};
    Student(string n, int k, int e, int m) : name(n), kor(k), eng(e), math(m) {};
};

bool compare(const Student& s1, const Student& s2){
    return s1.kor + s1.eng + s1.math < s2.kor + s2.eng + s2.math;
}

int main() {
    int n;
    Student students[10];
    
    cin >> n;
    for (int i = 0; i < n; i++){
        string name;
        int kor, eng, math; 
        cin >> name >> kor >> eng >> math;
        students[i] = Student(name, kor, eng, math);
    } 
    sort(students, students + n, compare);
    for (int i = 0; i < n; i++){
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << endl;
    }

    return 0;
}