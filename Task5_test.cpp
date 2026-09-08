#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n);

int main() {
    for (int n : {0, 1, 5}) {
        cout << "n = " << n << endl;

        vector<vector<int>> triangle = pascalTriangle(n);

        for (auto row : triangle) {
            for (int x : row) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    vector<vector<int>> triangle = pascalTriangle(5);

    cout << "Row 5: ";
    for (int x : triangle[4]) {
        cout << x << " ";
    }

    cout << "\nExpected: 1 4 6 4 1" << endl;

    return 0;
}