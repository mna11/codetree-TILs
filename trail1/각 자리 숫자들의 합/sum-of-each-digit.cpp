#include <iostream>
#include <string>

int main() {
    std::string str;
    std::string digits = "0123456789";
    int iAcc(0);
    std::cin >> str;
    auto idx = str.find_first_of(digits);
    while (idx != std::string::npos) {
        iAcc += str[idx] - '0';
        idx = str.find_first_of(digits, idx+1);
    }
    std::cout << iAcc << std::flush;
    return 0;
}