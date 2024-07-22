#include <iostream>
#include <string>
using namespace std;

class Product{
public:
    string name;
    int code;
    Product(string s = "codetree", int c = 50) : name(s), code(c) {};
};

int main() {
    string s;
    int n;
    cin >> s >> n;
    Product p1 = Product();
    Product p2 = Product(s, n);
    cout << "product " << p1.code << " is " << p1.name << endl;
    cout << "product " << p2.code << " is " << p2.name << endl;
    
    return 0;
}