#include <iostream>
#include <string>

int Func(std::string sDst, std::string sSrc) {
    int N(0);
    std::string sDstOriginal = sDst;
    while(true) {
        sDst = sDst[sDst.size() - 1] + sDst.substr(0, sDst.size() - 1);
        ++N;
        if (sDst.compare(sSrc) == 0) break;
        if (sDst.compare(sDstOriginal) == 0) {
            N = -1;
            break;
        }
    }
    return N;
}

int main() {
    std::string sDst, sSrc;
    std::cin >> sDst >> sSrc;
    std::cout << Func(sDst, sSrc);
    return 0;
}