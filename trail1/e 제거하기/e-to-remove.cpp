#include <iostream>
#include <string>

int main() {
    std::string sSrcStr;
    std::getline(std::cin, sSrcStr);
    sSrcStr.erase(sSrcStr.find('e'), 1);
    std::cout << sSrcStr;

    return 0;
}