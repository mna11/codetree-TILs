#include <iostream>
#include <string>
#include <array>

using namespace std;

int main() {
    int iInput(0);
    array<string, 5> arr = {"John", "Tom", "Paul"};
    cin >> iInput;
    if (iInput > 3) cout << "Vacancy";
    else cout << arr[iInput-1];
    return 0;
}