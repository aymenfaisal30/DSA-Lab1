#include <iostream>
#include <vector>
using namespace std;

using Matrix = vector<vector<int>>;

Matrix strassen(const Matrix&, const Matrix&);
Matrix naiveMultiply(const Matrix&, const Matrix&);

int main() {

    // 2x2 test
    Matrix A2 = {{1, 2}, {3, 4}};
    Matrix B2 = {{5, 6}, {7, 8}};

    cout << "2x2 test: ";

    if (strassen(A2, B2) == naiveMultiply(A2, B2))
        cout << "PASS\n";
    else
        cout << "FAIL\n";

    // 4x4 test
    Matrix A4 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Matrix B4 = {
        {2, 1, 1, 2},
        {1, 2, 2, 1},
        {2, 1, 2, 1},
        {1, 2, 1, 2}
    };

    cout << "4x4 test: ";

    if (strassen(A4, B4) == naiveMultiply(A4, B4))
        cout << "PASS\n";
    else
        cout << "FAIL\n";

    // Random-style 4x4 test
    Matrix R1 = {
        {2, 3, 1, 4},
        {1, 5, 2, 3},
        {4, 1, 3, 2},
        {3, 2, 4, 1}
    };

    Matrix R2 = {
        {1, 2, 3, 1},
        {2, 1, 1, 3},
        {3, 1, 2, 2},
        {1, 3, 2, 1}
    };

    cout << "Random 4x4 test: ";

    if (strassen(R1, R2) == naiveMultiply(R1, R2))
        cout << "PASS\n";
    else
        cout << "FAIL\n";

    return 0;
}