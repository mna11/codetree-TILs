#include <iostream>
#include <string> 
#include <cctype>

int main() {
    std::string str1, str2;
    std::string sIntAccStr1(""), sIntAccStr2("");
    std::cin >> str1 >> str2;

    for (const char& c : str1) {
        if (std::isdigit(c)) sIntAccStr1.push_back(c);
    }
    for (const char& c : str2) {
        if (std::isdigit(c)) sIntAccStr2.push_back(c);
    }

    std::cout << std::stoi(sIntAccStr1) + std::stoi(sIntAccStr2) << std::flush;

    return 0;
}