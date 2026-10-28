#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    while(N--)
    {
        int a, b, iMul(0);
        cin >> a>> b;
        for(int i =a; i <=b; ++i)
        {
            if(i%2 == 0)
            { 
                iMul += i;
            }
        }
        cout<<iMul<<endl;
    }
    return 0;
}