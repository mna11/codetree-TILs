#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    str.erase(str.begin() + 1);
    str.erase(str.end() - 2);
    std::cout << str << std::flush;
    return 0;
}