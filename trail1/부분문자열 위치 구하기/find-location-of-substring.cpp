#include <iostream>
#include <string>

int main() {
    std::string sSrcString, sDstString;
    std::cin >> sSrcString >> sDstString;
    int iDstIdx(-1);
    iDstIdx = sSrcString.find(sDstString);
    iDstIdx = iDstIdx != std::string::npos ? iDstIdx : -1;
    std::cout << iDstIdx << std::flush;
    return 0;
}