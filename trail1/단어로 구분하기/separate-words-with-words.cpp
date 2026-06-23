#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    int iIdxStart(0), iIdxEnd(0);
    while ((iIdxEnd = str.find(' ', iIdxStart)) != std::string::npos) {
        std::cout << str.substr(iIdxStart, iIdxEnd - iIdxStart) << std::endl;
        iIdxStart = iIdxEnd + 1;
    }
    std::cout << str.substr(iIdxStart) << std::flush;
    return 0;
}