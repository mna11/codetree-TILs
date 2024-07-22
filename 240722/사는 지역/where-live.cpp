#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Live{
public:
    string name;
    string street;
    string area;
    Live() {};
    Live(string n, string s, string a) : name(n), street(s), area(a) {};
};

bool comp(const Live& l1, const Live& l2){
    return l1.name > l2.name;
}

int main() {
    Live lives[10];
    int n;
    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> lives[i].name;
        cin >> lives[i].street;
        cin >> lives[i].area;
    }
    sort(lives, lives+n, comp);
    
    cout << "name " << lives[0].name << endl;
    cout << "addr " << lives[0].street << endl;
    cout << "city " << lives[0].area << endl;
    return 0;
}