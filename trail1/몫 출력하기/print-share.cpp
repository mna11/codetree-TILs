#include <iostream>
using namespace std;

int main() {
    int iInput(0), iPlay(0);
    while(true){
        cin >> iInput;
        if (iInput % 2 == 0)
        {
            cout << iInput / 2 << endl;
            iPlay++;
        } 
        if (3==iPlay)break;
    }
    return 0;
}