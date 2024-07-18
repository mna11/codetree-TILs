#include <iostream>
#include <cstring>

using namespace std;

bool IsYun(int Y){
    if (Y % 4 == 0 && (Y % 100 != 0 || Y % 400 == 0 )) return true;
    return false;
}

bool IsYes(int Y, int M, int D){
    int date[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (M == 2 && IsYun(Y)) date[1] = 29;
    if (D <= date[M-1]) return true;
    else return false;   
}

char*& func(int Y, int M, int D, char*& season){
    if (!IsYes(Y, M, D)){
        season = new char[3];
        strcpy(season, "-1");
    }
    else {
        if(M >= 3 && M <= 5){
            const char* spring;
            spring = "Spring";
            season = new char[strlen(spring) + 1];
            strcpy(season, spring);
        }
        else if(M >= 6 && M <= 8){
            const char* summer;
            summer = "Summer";
            season = new char[strlen(summer) + 1];
            strcpy(season, summer);
        }
        else if(M >= 9 && M <= 11){
            const char* fall;
            fall = "Fall";
            season = new char[strlen(fall) + 1];
            strcpy(season, fall);
        }
        else {
            const char* winter;
            winter = "Winter";
            season = new char[strlen(winter) + 1];
            strcpy(season, winter);
        }
    }
    return season;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int Y, M, D;
    char* season;
    cin >> Y >> M >> D;
    cout << func(Y, M, D, season);
    return 0;
}