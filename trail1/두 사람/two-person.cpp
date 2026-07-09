#include <iostream>
#include <utility>

using namespace std;

struct Human {
    int age;
    char sex;
};

int main() {
    Human* H = new Human[2];
    for (int i = 0; i < 2; ++i) {
        cin >> H[i].age >> H[i].sex;
    }
    if (H[0].sex == 'M' && H[0].age >= 19
    || H[1].sex == 'M' && H[1].age >= 19) {
        cout << 1;
    }
    else 
        cout << 0;

    delete[] H;
    return 0;
}