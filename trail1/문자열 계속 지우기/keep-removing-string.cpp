#include <iostream>
#include <string>

int main() {
    std::string A, B; 
    std::getline(std::cin, A);
    std::getline(std::cin, B);
    for (auto iAinBidx = A.find(B); iAinBidx != std::string::npos; iAinBidx = A.find(B)) {
        A.erase(iAinBidx, B.size()); 
    }
    std::cout << A << std::flush;

    return 0;
}