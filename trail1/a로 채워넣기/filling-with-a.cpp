#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    *(str.begin() + 1) = 'a';
    *(str.end() - 2) = 'a';
    std::cout << str << std::endl;
    return 0;
}