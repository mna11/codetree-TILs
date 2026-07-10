#include <iostream>
using namespace std;


enum class SEX 
{
    MAN = 0,
    WOMAN = 1
};

int main() {
    int age, sex;
    cin >> sex >> age;
    if (age >= 19) {
        if (sex == static_cast<int>(SEX::MAN)) {
            cout << "MAN" << endl;
        }
        else 
        {
            cout << "WOMAN" << endl;
        }
    }
    else {
        if (sex == static_cast<int>(SEX::MAN)) {
            cout << "BOY" << endl;
        }
        else 
        {
            cout << "GIRL" << endl;
        }
    }
    return 0;
}