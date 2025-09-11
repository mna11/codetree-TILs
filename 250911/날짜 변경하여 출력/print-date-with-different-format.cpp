#include <iostream>
using namespace std;

int main() {
    int yyyy, mm, dd;
    cin >> yyyy;
    cin.get();
    cin >> mm;
    cin.get();
    cin >> dd;

    printf("%d-%d-%d", mm, dd, yyyy);
    return 0;
}