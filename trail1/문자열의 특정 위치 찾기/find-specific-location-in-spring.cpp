#include <iostream>
#include <string>

int main() {
    std::string str;
    char c;
    int iCindex(-1);
    std::cin >> str >> c;
    std::string sDecision("No");
    
    if ((iCindex = str.find(c)) != std::string::npos) {
        sDecision = std::to_string(iCindex);
    }
    std::cout << sDecision << std::flush;
    return 0;
}