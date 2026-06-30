#include <iostream>
#include <string>
int main() {
    std::string str1, str2;
    int iStr1, iStr2;
    std::cin >> str1 >> str2;
    iStr1 = std::stoi(str1 + str2);
    iStr2 = std::stoi(str2 + str1);

    std::cout << iStr1 + iStr2 << std::endl; 
    return 0;
}