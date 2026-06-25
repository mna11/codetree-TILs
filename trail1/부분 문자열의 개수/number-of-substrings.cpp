#include <iostream>
#include <string>

int main() {
    std::string sSrcStr, sDstStr;
    std::cin >> sSrcStr >> sDstStr;
    
    int iStartIdx(0);
    int iDstCnt(0);
    while ((iStartIdx = sSrcStr.find(sDstStr, iStartIdx)) != std::string::npos) {
        ++iDstCnt;
        ++iStartIdx;
    }
    std::cout << iDstCnt << std::flush;

    return 0;
}