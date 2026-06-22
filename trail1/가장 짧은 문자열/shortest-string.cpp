#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1, str2, str3;
    std::cin >> str1 >> str2 >> str3;
    const auto len1 = str1.size(); 
    const auto len2 = str2.size(); 
    const auto len3 = str3.size(); 
    std::pair<int, int> minmax_len = std::minmax({len1, len2, len3});
    std::cout << minmax_len.second - minmax_len.first << std::endl; 
    return 0;
}