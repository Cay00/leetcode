#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int res = 0;
        int index_t[26];

        for (int j = 0; j < t.size(); j++) {
            index_t[t[j] - 'a'] = j;
        }

        for (int i = 0; i < s.size(); i++) {
            res += abs(i - (index_t[s[i] - 'a']));
        }

        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}