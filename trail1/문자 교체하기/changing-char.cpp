#include <iostream>
#include <string>

int main() {
    std::string sDstStr, sSrcStr;
    std::cin >> sDstStr >> sSrcStr;
    std::cout << sDstStr.substr(0, 2) 
        + sSrcStr.substr(2) << std::flush;
    return 0;
}