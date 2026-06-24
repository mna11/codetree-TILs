#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cin >> str;
    for (auto i = str.begin(); i != str.end(); ++i) {
        std::cout << *i << std::endl; 
    }
    return 0;
}