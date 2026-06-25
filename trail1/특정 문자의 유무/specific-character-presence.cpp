#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    std::string sDst = str.find("ee") != std::string::npos ? "Yes" : "No";
    std::string sSrc = str.find("ab") != std::string::npos ? "Yes" : "No";

    std::cout << sDst << " " << sSrc << std::flush;
    return 0;
}