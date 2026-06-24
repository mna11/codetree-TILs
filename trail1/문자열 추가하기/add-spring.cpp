#include <iostream>
#include <string> 

int main() {
    std::string str;
    getline(std::cin, str);
    str += "Hello";
    std::cout << str << std::flush;
    return 0;
}