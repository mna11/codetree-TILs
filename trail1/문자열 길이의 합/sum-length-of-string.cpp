#include <iostream>
#include <string>
#include <sstream>

int main() {
    int iN(0);
    int iCnt(0);
    int iTotalLength(0);
    std::string str;
    std::cin >> iN;
    for (int i = 0; i < iN; i++) {
        std::cin >> str;
        iTotalLength += str.size(); 
        if (str.find_first_of('a') == 0) iCnt++;
    }
    std::cout << iTotalLength << " " << iCnt << std::flush;
    return 0;
}