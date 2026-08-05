#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;

int main() {

    // 정보 입력단
    int N(0), M(0), D(0), S(0);
    cin >> N >> M >> D >> S;
    vector<tuple<int, int, int>> vecInt3;
    int a, b, c;
    for (int i = 0; i < D; ++i)
    {
        cin >> a >> b >> c;
        vecInt3.push_back(make_tuple(a, b, c));
    }
    vector<tuple<int, int>> vecInt2;
    for (int i = 0; i < S; ++i)
    {
        cin >> a >> b;
        vecInt2.push_back(make_tuple(a, b));
    }

    // Solve
    vector<bool> vecCanSickM(M, true);

    for (auto t1 : vecInt2)
    {
        int iSickPerson, iSickTime;
        tie(iSickPerson, iSickTime) = t1;

        vector<bool> ateBefore(M, false);

        for (auto t2 : vecInt3)
        {
            int iPerson, iCheese, iEatTime;
            tie(iPerson, iCheese, iEatTime) = t2;

            if (iSickPerson == iPerson && iSickTime > iEatTime) {
                ateBefore[iCheese - 1] = true;
            }
        }

        for (int cheese = 0; cheese < M; ++cheese) {
            if (!ateBefore[cheese]) {
                vecCanSickM[cheese] = false;
            }
        }
    }


    // 상함 위험이 있는 치즈를 기준으로 사람 찾기
    vector<bool> vecCanSickP(N, false);
    for (const auto& record : vecInt3)
    {
        int person, cheese, eatTime;
        tie(person, cheese, eatTime) = record;

        if (vecCanSickM[cheese - 1]) {
            vecCanSickP[person - 1] = true;
        }
    }

    int iResult = count(vecCanSickP.begin(), vecCanSickP.end(), true);
    cout << iResult;
    return 0;
}