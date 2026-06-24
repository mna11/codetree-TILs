#include <iostream>
#include <string>

int main() {
    std::string sA, sB;
    std::string sResultAB, sResultBA;
    std::getline(std::cin, sA);
    std::getline(std::cin, sB);
    sResultAB = sA + sB;
    sResultBA = sB + sA;

    bool bIsSame(false);
    bIsSame = sResultAB.compare(sResultBA) == 0 ? true : false;

    std::cout << std::boolalpha;
    std::cout << bIsSame << std::flush;
    return 0;
}