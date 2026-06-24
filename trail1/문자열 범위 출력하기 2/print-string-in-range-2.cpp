#include <iostream>
#include <string>

int main() {
    std::string str;
    int iN(0);
    getline(std::cin, str);
    std::cin >> iN;

    for (auto i = str.rbegin(); (i != str.rend() && iN != 0); ++i, --iN){
        std::cout << *i << std::flush;
    }

    return 0;
}