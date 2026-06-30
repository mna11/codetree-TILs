#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int iA, iB, iCnt(0);
    std::cin >> iA >> iB;
    std::string str = std::to_string(iA + iB);
    
    auto it = std::find_if(str.begin(), str.end(), [](const char& c){
        return c == '1';
    });
    while (it != str.end()) {
        ++iCnt;
        it = std::find_if(it + 1, str.end(), [](const char& c){
            return c == '1';
        });
    }

    std::cout << iCnt;

    return 0;
}