#include <iostream>
using namespace std;

int main() {
    int iWidth(0), iHeight(0);
    char cInput(0);
    while(true)
    {
        cin >> iWidth >> iHeight >> cInput;
        cout << iWidth * iHeight << endl;
        if ('C' == cInput) break;
    }
    return 0;
}