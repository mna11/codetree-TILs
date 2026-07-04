#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];


class Weather {
public :
    string date;
    string day;
    string weather;
    Weather(string date,string day, string weather) 
        : date(date), day(day), weather(weather) {}
};

bool comp(const Weather& w1, const Weather& w2) {
    string year1 = w1.date.substr(0, 4);
    string year2 = w2.date.substr(0, 4); 
    string month1 = w1.date.substr(5, 2);
    string month2 = w2.date.substr(5, 2);
    string day1 = w1.date.substr(8,2);
    string day2 = w2.date.substr(8, 2);

    if (stoi(year1) < stoi(year2)) {
        return true;
    }
    else if (stoi(year1) > stoi(year2)) {
        return false;
    }
    else {
        if (stoi(month1) < stoi(month2)) {
            return true;
        }
        else if (stoi(month1) > stoi(month2)) {
            return false;
        }
        else {
            if (stoi(day1) < stoi(day2)) {
                return true;
            }
            else if (stoi(day1) > stoi(day2)) {
                return false;
            }  
            else {
                true;
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
    }

    // Please write your code here.
    vector<Weather> vec;
    for (int i = 0; i < n; ++i) {
        if (weather[i].compare("Rain") != 0) continue;
        vec.push_back(Weather(date[i], day[i], weather[i]));
    }
    sort(vec.begin(), vec.end(), comp);

    cout << vec[0].date << ' ' << vec[0].day << ' ' << vec[0].weather;
    return 0;
}