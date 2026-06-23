#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    int iIdxStart(0), iIdxEnd(0);
    bool bIsOdd(true);
    while ((iIdxEnd = str.find(' ', iIdxStart)) != std::string::npos) {
        if (bIsOdd) std::cout << str.substr(iIdxStart, iIdxEnd-iIdxStart) << std::endl;
        iIdxStart = iIdxEnd + 1;
        bIsOdd = !bIsOdd;
    }
    if (bIsOdd) std::cout << str.substr(iIdxStart) << std::flush;
    return 0;
}