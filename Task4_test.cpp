#include <iostream>
#include <string>
using namespace std;

int findPattern(const string& text, const string& pattern);

int main() {
    cout << "Beginning: " << findPattern("hello world", "hello") << endl;
    cout << "End: " << findPattern("hello world", "world") << endl;
    cout << "Not present: " << findPattern("hello world", "xyz") << endl;
    cout << "Empty pattern: " << findPattern("hello", "") << endl;

    return 0;
}