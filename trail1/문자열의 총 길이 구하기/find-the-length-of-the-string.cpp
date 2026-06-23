#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    int iIdxStart(0); 
    int iIdxEnd(0);
    int iTotalLen(0);
    while ((iIdxEnd = str.find(' ', iIdxStart)) != std::string::npos) {
        iTotalLen += iIdxEnd - iIdxStart;
        iIdxStart = iIdxEnd + 1;
    }
    iTotalLen += str.size() - iIdxStart;
    std::cout << iTotalLen;
    return 0;
}