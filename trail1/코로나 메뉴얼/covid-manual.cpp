#include <iostream>
using namespace std;

typedef struct Human {
    bool symptom;
    int temp;
    char hospital;
} HUMAN, *PHUMAN;

int main() {
    PHUMAN humans = new HUMAN[3];
    for (int i = 0; i < 3; ++i) {
        char a; int b; bool c; 
        cin >> a >> b;
        c = a == 'Y' ? true : false;
        humans[i] = HUMAN{ c, b, 'D'};

        if (humans[i].symptom && humans[i].temp >= 37) humans[i].hospital = 'A';
        else if (!humans[i].symptom && humans[i].temp >= 37) humans[i].hospital = 'B';
        else if (humans[i].symptom && humans[i].temp < 37) humans[i].hospital = 'C';
        else humans[i].hospital = 'D';
    }

    int iCnt(0);
    for (int i = 0; i < 3; ++i) {
        if (humans[i].hospital == 'A') ++iCnt;
    }

    if (iCnt >= 2) {
        cout << 'E';
    }
    else {
        cout << 'N';
    }

    delete[] humans;
    return 0;
}