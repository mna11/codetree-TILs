#include <iostream>
#include <string>

int main() {
    std::string str;
    int iEeCnt(0), iEbCnt(0);
    getline(std::cin, str);
    for (auto i = str.begin(); i != str.end(); ++i) {
        if (*i == 'e') {
            if (*(i+1) == 'e') iEeCnt++;
            else if (*(i+1) == 'b') iEbCnt++;
        }
    }
    std::cout << iEeCnt << " " << iEbCnt << std::flush;
    return 0;
}