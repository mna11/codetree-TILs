#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
#include <vector>

using namespace std;

int n;
string name[10];
int korean[10];
int english[10];
int math[10];

class Student {
public:
    string name;
    int iKorGrd;
    int iEngGrd;
    int iMathGrd;

    Student(string name, int kor, int eng, int math) : name(name), iKorGrd(kor), iEngGrd(eng), iMathGrd(math) {}
};

bool CompareStudent(const Student& s1, const Student& s2) {
    return make_tuple(-s1.iKorGrd, -s1.iEngGrd, -s1.iMathGrd) < make_tuple(-s2.iKorGrd, -s2.iEngGrd, -s2.iMathGrd);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> korean[i];
        cin >> english[i];
        cin >> math[i];
    }

    // Please write your code here.
    vector<Student> vec;
    for (int i = 0; i < n; ++i) {
        vec.push_back(Student(name[i], korean[i], english[i], math[i]));
    }
    sort(vec.begin(), vec.end(), CompareStudent);
    for (Student s : vec) {
        cout << s.name << ' ' << s.iKorGrd << ' ' << s.iEngGrd << ' ' << s.iMathGrd << endl; 
    }
    return 0;
}