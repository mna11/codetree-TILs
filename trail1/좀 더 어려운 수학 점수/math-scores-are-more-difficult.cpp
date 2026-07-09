#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    vector<tuple<int, int, string>> vec;
    tuple<int, int, string> t1, t2;
    int iMath, iEng; 
    cin >> iMath >> iEng;
    t1 = make_tuple(iMath, iEng, "A");
    cin >> iMath >> iEng;
    t2 = make_tuple(iMath, iEng, "B");
    vec.push_back(t1);
    vec.push_back(t2);
    
    sort(vec.begin(), vec.end(), greater<tuple<int, int, string>>());
    cout << get<2>(vec[0]);
    return 0;
}