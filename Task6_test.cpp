#include <iostream>
#include <vector>
using namespace std;

int mode(const vector<int>& arr);

int main() {
    cout << "Unique mode: "
         << mode({1, 2, 2, 3, 2, 4}) << endl;

    cout << "Multiple modes: "
         << mode({1, 1, 2, 2, 3}) << endl;

    cout << "Empty array: "
         << mode({}) << endl;

    return 0;
}