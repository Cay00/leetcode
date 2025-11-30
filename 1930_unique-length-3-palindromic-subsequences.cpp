#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res = 0;

        int n = s.size();
        int first[26], last[26];
        fill(first, first + 26, n);
        fill(last, last + 26, -1);


        for (int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            // find first and last index of each letter
            first[c] = min(first[c], i);
            last[c] = max(last[c], i);
        }
        
        for (int i = 0; i < 26; i++) {
            if (first[i] < last[i]) {
                bool mid[26] = { false };

                for (int j = first[i] + 1; j < last[i]; j++) {
                    mid[s[j] - 'a'] = true;
                }

                for (int k = 0; k < 26; k++) {
                    if (mid[k] == true) {
                        res++;
                    }
                }
            }

            
        }

        return res;
    }
};

int main() {
    Solution solution;

    string s = { "aabca" };

    int ans = solution.countPalindromicSubsequence(s);
    cout << ans << endl;

    return 0;
}