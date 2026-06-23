#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    int iIdxStart(str.size() - 1), iIdxEnd(0);
    while ((iIdxEnd = str.rfind(' ', iIdxStart)) != std::string::npos) {
        std::cout << str.substr(iIdxEnd+1, iIdxStart-iIdxEnd) << std::endl;
        iIdxStart = iIdxEnd - 1;
    }
    std::cout << str.substr(0, iIdxStart-iIdxEnd) << std::flush;
    return 0;
}