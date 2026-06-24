#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    bool IsEven = str.size() % 2 == 0 ? true : false; 
    for (auto i = str.rbegin(); i != str.rend(); ++i) {
        if (IsEven) std::cout << *i << std::flush;
        IsEven = !IsEven;
    }

    return 0;
}