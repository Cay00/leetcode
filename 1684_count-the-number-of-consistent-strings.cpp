#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowed_set(allowed.begin(), allowed.end());
        int count = 0;

        for (string word : words) {
            bool consistent = true;
            for (char letter : word) {
                if (allowed_set.find(letter) == allowed_set.end()) {
                    consistent = false;
                    break;
                }
            }
            if (consistent)
                count++;
        }
        return count;
    }
};

int main() {
    Solution solution;

    return 0;
}