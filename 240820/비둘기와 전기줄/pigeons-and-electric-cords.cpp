#include <iostream>

#define MAX_HATO_CNT 10
#define INIT 2
#define LEFT 0
#define RIGHT 1
using namespace std;

class hato{
public:
    int location;
    hato(): location(INIT) {};
    ~hato() = default;
};

int n, ans;
hato pigeons[MAX_HATO_CNT + 1];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++){
        int pigeons_num, left_or_right;
        cin >> pigeons_num >> left_or_right;
        if (pigeons[pigeons_num].location != INIT) {
            if(pigeons[pigeons_num].location == LEFT && left_or_right == RIGHT) ans++;
            else if (pigeons[pigeons_num].location == RIGHT && left_or_right == LEFT) ans++; 
        }
        pigeons[pigeons_num].location = left_or_right;
    }
    cout << ans;

    return 0;
}