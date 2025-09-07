#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec;
    vector<int> doubledVec;
    for (int i = 0; i < N; i++){
        int element;
        cin >> element;
        vec.push_back(element);
    }

    transform(vec.begin(), vec.end(), back_inserter(doubledVec), [](int x){return x*x;});
    for (int i : doubledVec){
        cout << i <<' ';
    }
    return 0;
}