#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> possible(s.size() + 1, false);
        possible[0] = true;

        for (int i = 1; i <= s.size(); i++) {
            for (string w : wordDict) {
                int len = w.size();

                if (i >= len && possible[i - len] && s.substr(i - len, len) == w) {
                    possible[i] = true;
                    break;
                }
            }
        }

        return possible[s.size()];
    }
};

int main() {
    Solution solution;

    string s = { "leetpen" };
    vector<string> wordDict = { "leet","pen" };

    bool ans = solution.wordBreak(s, wordDict);
    cout << ans << endl;

    return 0;
}