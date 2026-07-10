#include <iostream>
using namespace std;

int main() {
    int Y(0);
    cin >> Y;
    if ((Y%4 != 0) || (Y%100 == 0 && Y%400 != 0)){
        cout << std::boolalpha << false << endl; 
    }
    else {
        cout << std::boolalpha <<true << endl;
    }
    return 0;
}