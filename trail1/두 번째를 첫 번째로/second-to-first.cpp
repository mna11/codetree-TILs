#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    char c1, c2;
    std::getline(std::cin, str);
    c1 = str[0];
    c2 = str[1];
    std::replace(str.begin(), str.end(), c2, c1);
    std::cout << str;
    return 0;
}