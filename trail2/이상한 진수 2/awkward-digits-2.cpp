#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    bool bFlag(false);
    for (int i = 0; i < A.size(); ++i)
    {
        if ('0' == A[i]) {
            A[i] = '1';
            bFlag = true;
            break;
        }
    }
    if (!bFlag) A[A.size() - 1] = '0';
    int iDec(0);
    for (int i = 0; i < A.size(); ++i)
    {
        iDec = iDec * 2 + (A[i] - '0');
    }
    cout << iDec;
    return 0;
}