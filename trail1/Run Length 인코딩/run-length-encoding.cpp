#include <iostream>
#include <string>

int main() {
    std::string str, sRunLengthEncoding;
    std::getline(std::cin, str);
    for (auto i = str.begin(); i != str.end(); ++i){
        char& cc = *i;
        sRunLengthEncoding.append(&cc, 1);
        int iAlphabetCnt(1);
        for (auto j = i + 1; j != str.end(); ++j){
            if (*j == cc) {
                ++iAlphabetCnt;
                ++i;
            } else break;
        }
        sRunLengthEncoding.append(std::to_string(iAlphabetCnt));
    }
    std::cout << sRunLengthEncoding.size() << std::endl;
    std::cout << sRunLengthEncoding << std::flush;
    return 0;
}
