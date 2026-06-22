#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    std::string str = s1.append(s2);
    str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
    std::cout << str;
    return 0;
}