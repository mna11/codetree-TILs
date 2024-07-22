#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Rain{
public:
    string y, m, d;
    string days;
    Rain(){};
    Rain(string y, string m, string d, string days) : y(y), m(m), d(d), days(days) {};
};

bool comp(const Rain& r1, const Rain& r2){
    if (r1.y.compare(r2.y) < 0) return true;
    else if (r1.y.compare(r2.y) == 0 && r1.m.compare(r2.m) < 0) return true;
    else if (r1.y.compare(r2.y) == 0 && r1.m.compare(r2.m) == 0 && r1.d.compare(r2.d) < 0) return true;
    return false;
}

int main() {
    int n;
    Rain r[100];
    
    cin >> n;
    for (int i = 0; i < n; i++){
        string s1, s2, s3;
        string year, month, day;
        cin >> s1 >> s2 >> s3;
        if (s3.compare("Rain")) {
            i--;
            n--;
            continue;
        }

        year = s1.substr(0, 4);
        month = s1.substr(5, 2);
        day = s1.substr(8, 2);

        r[i] = Rain(year, month, day, s2);
    }
    sort(r, r + n, comp);
    cout << r[0].y << "-" << r[0].m << "-" << r[0].d << " " << r[0].days << " Rain";

    return 0;
}