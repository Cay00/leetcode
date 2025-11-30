#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size() == t.size()) {
            int s_let[26] = { 0 };
            int t_let[26] = { 0 };

            for (int i = 0; i < s.size(); i++) {
                s_let[s[i] - 'a']++;
                t_let[t[i] - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                if (s_let[i] != t_let[i]) {
                    return false;
                }
            }
        }
        else {
            return false;
        }

        return true;
    }
};

int main() {
    Solution solution;

    string s = "anagram" ;
    string t = "nagaram";

    bool ans = solution.isAnagram(s, t);
    cout << ans << endl;

    return 0;
}