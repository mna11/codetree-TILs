#include <iostream>
#include <string>
#include <array> 

int main() {
    std::array<std::string, 10> aStr;    
    char c;
    int iCnt(0);
    for (int i = 0; i < 10; i++) {
        std::cin >> aStr[i];
    }
    std::cin >> c;
    for (auto i = aStr.begin(); i != aStr.end(); ++i) {
        if (i->back() == c) {
            ++iCnt;
            std::cout << *i << std::endl;
        }
    }
    if (iCnt == 0) std::cout << "None" << std::flush;
    return 0;
}