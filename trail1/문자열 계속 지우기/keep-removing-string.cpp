#include <iostream>
#include <string>
int main() {
    std::string A, B;
    std::cin >> A >> B;
    std::string::size_type iAinBidx;
    while ((iAinBidx = A.find(B)) != std::string::npos) {
        A.erase(iAinBidx, B.size());
    }
    std::cout << A << std::flush;
}