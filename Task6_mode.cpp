#include <vector>
#include <unordered_map>
using namespace std;

// Returns the most frequent element.
// Returns 0 for an empty array.
int mode(const vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }

    unordered_map<int, int> frequency;

    for (int x : arr) {
        frequency[x]++;
    }

    int best = arr[0];

    for (int x : arr) {
        if (frequency[x] > frequency[best]) {
            best = x;
        }
    }

    return best;
}