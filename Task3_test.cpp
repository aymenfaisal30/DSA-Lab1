#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllIndices(const vector<int>& arr, int key);

void printVector(const vector<int>& v) {
    cout << "{ ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << "}\n";
}

int main() {
    cout << "Multiple occurrences: ";
    printVector(findAllIndices({1, 2, 2, 3, 2}, 2));

    cout << "Key not present: ";
    printVector(findAllIndices({1, 2, 3}, 9));

    cout << "Empty array: ";
    printVector(findAllIndices({}, 1));

    return 0;
}