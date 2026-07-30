#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main() {
    map<int, const char*> m;
    m.insert(make_pair<int, const char*>(0, "Vacancy"));
    m.insert(make_pair<int, const char*>(1, "John"));
    m.insert(make_pair<int, const char*>(2, "Tom"));
    m.insert(make_pair<int, const char*>(3, "Paul"));
    m.insert(make_pair<int, const char*>(4, "Sam"));

    int iInput;
    while(true)
    {   
        cin >> iInput;
        if (iInput <= 0 || iInput > 4) {
            cout << m[0];
            break;
        }
        cout << m[iInput] << endl;
    }   

    return 0;
}