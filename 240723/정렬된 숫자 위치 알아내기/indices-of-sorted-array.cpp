#include <iostream>
#include <algorithm>

using namespace std;

class Array{
public:
    int key;
    int num;

    Array(){};
    Array(int key, int num) : key(key), num(num) {};
};

bool compare(const Array& arr1, const Array& arr2){
    if (arr1.num == arr2.num) return arr1.key < arr2.key;
    return arr1.num < arr2.num;
}

int main() {
    int n, key(0), num;
    Array* array;

    cin >> n;
    array = new Array[n];

    for (int i = 0; i < n; i++){
        cin >> num;
        array[i] = Array(key++, num);
    }
    sort(array, array + n, compare);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (array[j].key == i) {
                cout << j + 1 << " ";
                break;
            }
        }
    }

    delete[] array;
    return 0;
}