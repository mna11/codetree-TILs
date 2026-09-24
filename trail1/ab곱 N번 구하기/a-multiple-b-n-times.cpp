#include <iostream>
using namespace std;

int main() {
    int n(0);
    cin >> n;

    for(int i= 0; i<n;++i)
    {
        int iSum(1);
        int a(0), b(0);
        cin >> a >> b;
        for(int j = a; j <= b; ++j)
        {
            iSum *= j;
        }
        cout << iSum << endl;
    }
    return 0;
}