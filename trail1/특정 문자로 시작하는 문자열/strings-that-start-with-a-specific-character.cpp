#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <vector>

int main() {
    int iN(0);
    char c;
    int iCnt(0), iTotalLength(0);
    std::cin >> iN;
    std::vector<std::string> vStr(iN);
    for (int i = 0; i < iN; i++) {
        std::cin >> vStr[i];
    } 
    std::cin >> c;
    for (auto it = vStr.begin(); it != vStr.end(); it++){
        if (*(it->begin()) == c) {
            ++iCnt;
            iTotalLength += it->size();
        }
    }
    std::cout << iCnt << " " << std::flush;
    std::cout << std::fixed << std::setprecision(2)
          << static_cast<double>(iTotalLength) / iCnt;
    
    return 0;
}