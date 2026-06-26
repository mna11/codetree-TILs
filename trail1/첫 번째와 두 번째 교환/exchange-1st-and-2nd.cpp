#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);
    int idx;
    char c1 = str[0];
    char c2 = str[1];

    for (auto it = str.begin(); it != str.end(); ++it) {
        if (*(it) == c1) *(it) = c2;
        else if (*(it) == c2) *(it) = c1;
    }

    std::cout << str << std::flush;
    
    return 0;
}