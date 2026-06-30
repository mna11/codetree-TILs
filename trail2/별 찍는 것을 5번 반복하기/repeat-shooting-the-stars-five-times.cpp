#include <iostream>
using namespace std;

void PrintStars10(){
    for (int i = 0; i < 10; ++i){
        cout << "*";
    }
}


int main() {
    for (int i = 0; i < 5; ++i) {
        PrintStars10();
        cout << endl;
    }
    return 0;
}