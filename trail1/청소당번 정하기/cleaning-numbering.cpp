#include <iostream>
using namespace std;

typedef struct tagClean 
{
    int m_iClassRoom;
    int m_iCorridor;
    int m_iBathRoom;
} CLEAN;

int main() {
    CLEAN clean{0, 0, 0};
    int N(0);
    cin >> N;
    for (int i = 1; i <= N; ++i)
    {
        if (i % 12 == 0) clean.m_iBathRoom += 1;
        else if (i % 3 == 0) clean.m_iCorridor += 1; 
        else if (i % 2 == 0) clean.m_iClassRoom += 1;
    }
    cout << clean.m_iClassRoom << ' ' << clean.m_iCorridor <<
        ' ' << clean.m_iBathRoom << flush;
    return 0;
}