#include <iostream>
#include <string>

int main() {
    int iN(0);
    std::string sInput, sResult;
    std::cin >> iN;
    std::cin.ignore();
    for (int i = 0; i < iN; ++i) {
        std::getline(std::cin, sInput);
        sResult.append(sInput);
    }
    std::cout << sResult << std::flush;
    return 0;
}