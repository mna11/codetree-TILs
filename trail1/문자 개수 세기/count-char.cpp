#include <iostream>
#include <string>

int main() {
    std::string str;
    char c;
    int cnt(0);
    std::getline(std::cin, str);
    std::cin >> c;
    for (char ch : str) {
        if (ch == c) cnt++;
    }
    std::cout << cnt;
    return 0;
}