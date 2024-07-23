#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;

bool compare(tuple<string, int, int, int>& t1, tuple<string, int, int, int>& t2){
    string s; int kor, eng, math;
    tie(s, kor, eng, math) = t1;
    tuple<int, int, int> tmp1 = make_tuple(kor, eng, math);
    tie(s, kor, eng, math) = t2;
    tuple<int, int, int> tmp2 = make_tuple(kor, eng, math);
    return tmp1 > tmp2;
}

int main() {
    int n;
    cin >> n;
    tuple<string ,int, int, int> t[10];
    for (int i = 0; i < n; i++){
        string s;
        int kor, eng, math;
        cin >> s >> kor  >> eng >> math;
        tuple<string, int, int, int> tmp = make_tuple(s, kor, eng, math);
        t[i] = tmp; 
    }
    sort(t, t + n, compare);
    for (int i = 0; i < n; i++){
        cout << get<0>(t[i]) << " " << get<1>(t[i]) << " " << get<2>(t[i]) << " " << get<3>(t[i]) << endl;
    }
    return 0;
}