#include <iostream>
#include <string>
#include <array>

int main() {
    std::array<std::string, 4> str;

    for (int i = 0; i < 4; i++)
        std::cin >> str[i];
    for (auto it = str.rbegin(); it != str.rend(); ++it)
        std::cout << *it << std::endl;

    return 0;
}