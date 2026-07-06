#include <iostream>
#include <tuple>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> vec;
vector<int> record;

int cmp(const pair<int, int>& p1, const pair<int, int>& p2) {
    if (p1.first < p2.first) return true;
    else if (p1.first == p2.first) return p1.second < p2.second;
    else return false;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        vec.push_back(make_pair(num, i));
    }

    sort(vec.begin(), vec.end(), cmp);

    record.resize(N);
    for (int i = 0; i < vec.size(); ++i){
        record[vec[i].second] = i + 1; 
    }
    for (int i = 0; i < record.size(); ++i){
        cout << record[i] << ' ';
    }
    return 0;
}
