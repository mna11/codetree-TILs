#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>

using namespace std;

class Weather{
public:
    int y, m, d;
    string day;
    string weather;
    Weather() {};
    Weather(tuple<int, int, int> t, string day_, string weather_) { 
        tie(y, m, d) = t;
        day = day_;
        weather = weather_;
    };
};

tuple<int, int, int> DaySep(string s){
    int point1(-1), point2(-1);
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '-' && point1 == -1) point1 = i;
        else if (s[i] == '-') point2 = i;
    }
    tuple<int, int, int> t;
    t = make_tuple(stoi(s.substr(0, point1)), stoi(s.substr(point1 + 1, point2)), stoi(s.substr(point2+1, s.length())));
    return t;
}

bool comp(const Weather& w1, const Weather& w2){
    if (w1.y < w2.y) return true;
    else if (w1.y == w2.y && w1.m < w2.m) return true;
    else if (w1.y == w2.y && w1.m == w2.m && w1.d <= w2.d) return true;
    return false;
}

int main() {
    int n;
    string s1, s2, s3;
    Weather* w;
    
    cin >> n;
    w = new Weather[n];
    for (int i = 0 ; i < n; i++){
        tuple<int, int, int> t;
        cin >> s1 >> s2 >> s3;
        t = DaySep(s1);
        w[i] = Weather(t, s2, s3);
    }

    sort(w, w + n, comp);

    for (int i = 0; i < n; i++){
        if (!w[i].weather.compare("Rain"))
        {   
            if (w[i].m < 10 && w[i].d < 10){
            cout << w[i].y << "-0" << w[i].m << "-0" << w[i].d << " " << w[i].day << " " << w[i].weather << endl;        
            }
            else if (w[i].m < 10) {
            cout << w[i].y << "-0" << w[i].m << "-" << w[i].d << " " << w[i].day << " " << w[i].weather << endl;    
            }
            else if (w[i].d < 10){
            cout << w[i].y << "-" << w[i].m << "-0" << w[i].d << " " << w[i].day << " " << w[i].weather << endl;    
            } else {
            cout << w[i].y << "-" << w[i].m << "-" << w[i].d << " " << w[i].day << " " << w[i].weather << endl;
            }
            break;
        }
    }

    delete[] w;
    return 0;
}