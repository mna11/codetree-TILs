#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1, str2; 
    std::cin >> str1 >> str2;
    auto it1 = std::find_if(str1.begin(), str1.end(), [](const char& c){ return isdigit(c) == 0;});
    int iTemp1 = std::stoi(std::string(str1.begin(), it1));
    auto it2 = std::find_if(str2.begin(), str2.end(), [](const char& c){ return isdigit(c) == 0;});
    int iTemp2 = std::stoi(std::string(str2.begin(), it2));
    
    std::cout << iTemp1 + iTemp2 << std::flush;
    return 0;
}