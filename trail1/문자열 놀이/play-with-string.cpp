#include <iostream>
#include <string>
#include <algorithm>


int main() {
    std::string str;
    int Q(0);
    std::cin >> str >> Q;

    int iInput(0);
    while(Q--) {
        std::cin >> iInput;
        switch(iInput) {
            case 1:
            {
                int a(0), b(0);
                std::cin >> a >> b;
                std::swap(str[a-1], str[b-1]);
                std::cout << str << std::endl;
                break;
            }
            case 2: 
            {
                char x, y;
                std::cin >> x >> y;
                std::replace(str.begin(), str.end(), x, y);
                std::cout << str << std::endl;
                break;
            }
            default :
                break;
        }
    }


    return 0;
}