#include <iostream>
#include <string>

int main() {
    std::string sSrcStr;
    int iN(0), iInput(0);
    std::cin >> sSrcStr;
    while(true) {
        std::cin >> iInput;
        iInput = iInput > sSrcStr.size() - 1 ? sSrcStr.size() - 1 : iInput;
        sSrcStr.erase(iInput, 1);
        std::cout << sSrcStr << std::endl;

        if (sSrcStr.size() == 0) break;
    }   
    return 0;
}