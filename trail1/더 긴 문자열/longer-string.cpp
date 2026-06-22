#include <iostream> 
#include <string> 

int main() {
    std::string str1, str2;
    std::cin >> str1 >> str2;

    const auto len1 = str1.size(); 
    const auto len2 = str2.size();

    if (len1 == len2) {
        std::cout << "same";
    } else {
        const std::string& longer = len1 > len2 ? str1 : str2;
        std::cout << longer << ' ' << longer.size();
    }
}