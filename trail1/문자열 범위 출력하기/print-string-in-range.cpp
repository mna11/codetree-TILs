#include <iostream>
#include <string>


int main() {
    std::string line;
    std::getline(std::cin, line);
    std::cout << line.substr(2, 8);
    return 0;
}