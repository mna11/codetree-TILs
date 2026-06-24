#include <iostream>
#include <string>

int main() {
    int iN(0);
    std::string sInput;
    std::string sResult;
    std::cin>>iN;
    for (int i = 0; i < iN; i++){
        std::cin >> sInput;
        sResult.append(sInput);
    }
    for (auto it = sResult.begin(); it != sResult.end(); ++it) {
        if ((it != sResult.begin()) && (it - sResult.begin()) % 5 == 0) std::cout << std::endl;
        std::cout << *it;
    }
    return 0;
}