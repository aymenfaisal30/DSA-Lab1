#include <string>
using namespace std;

// Returns the first index of pattern in text, or -1 if not found.
int findPattern(const string& text, const string& pattern) {
    if (pattern.empty()) {
        return 0;
    }

    for (int i = 0; i <= text.size() - pattern.size(); i++) {
        int j = 0;

        while (j < pattern.size() && text[i + j] == pattern[j]) {
            j++;
        }

        if (j == pattern.size()) {
            return i;
        }
    }

    return -1;
}