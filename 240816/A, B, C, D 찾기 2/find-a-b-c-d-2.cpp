#include <iostream>
#include <algorithm>
#include <array>

#define MAX_INPUT_CNT 15
#define MAX_RANGE 40

using namespace std;

array<int, MAX_INPUT_CNT> input;
//int input[MAX_INPUT_CNT];

int main() {
    array<int, MAX_INPUT_CNT>::iterator iter;
    for (iter = input.begin(); iter < input.end(); iter++) cin >> *iter;
    sort(input.begin(), input.end());

    for (int a = 1; a <= MAX_RANGE; a++){
        for (int b = a; b <= MAX_RANGE; b++){
            for (int c = b; c <= MAX_RANGE; c++){
                for (int d = c; d <= MAX_RANGE; d++){
                    array<int, MAX_INPUT_CNT> check =
                    { 
                    a, b, c, d, 
                    a + b, b + c, c + d, d + a,
                    a + c, b + d, a + b + c, a + b + d,
                    a + c + d, b + c + d, a + b + c + d
                    };
                    sort(check.begin(), check.end());
                    if (input == check){
                        cout << a << " " << b << " " << c << " " << d << endl;  
                    }
                }   
            }
        }
    }
    return 0;
}