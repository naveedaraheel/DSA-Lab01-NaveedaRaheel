#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    if (indices.empty()) {
        cout << "Key not found";
    }
    return indices;
}

void printVector(const vector<int>& vec) {
    for (int index : vec) {
        cout << index << " ";
    }
    cout << endl;
}

int main() {
    printVector(findAllIndices({1, 2, 3, 2, 4, 2}, 2));
    printVector(findAllIndices({1, 2, 3, 2, 4, 2}, 8));
    printVector(findAllIndices({}, 2));
}