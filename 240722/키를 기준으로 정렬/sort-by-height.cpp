#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person{
public:
    string name;
    int height;
    int weight;

    Person() {};
    Person(string n, int h, int w) : name(n), height(h), weight(w) {};
    void Print() {
        cout << name << " " << height << " " << weight << endl;
    }
};

bool compare(const Person& p1, const Person& p2){
    return p1.height < p2.height;
}

int main() {
    int n;
    Person p[10];
    cin >> n;
    for (int i = 0; i < n; i++){
        string n;
        int h;
        int w;
        cin >> n >> h >> w;
        p[i] = Person(n, h, w);
    }

    sort(p, p +n, compare);

    for (int i = 0 ; i < n; i++){
        p[i].Print();
    }
    return 0;
}