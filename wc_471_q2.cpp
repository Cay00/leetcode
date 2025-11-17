#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int res = 0;
        string last;

        vector<int> letterCount(26, 0);

        for (int i = 0; i < s.length(); i++) {
            letterCount[s[i] - 'a']++;
        }

        for (int r = 1; r < s.size(); r++) {
            for (int i = 0; i < s.size() ; i++) {
                for (int j = i; j < s.size() - i; j++) {
                    cout << s[j];
                }
                cout << endl;
            }
            cout << endl;
        }

        /*for (int i = 0; i < letterCount.size(); i++) {
            cout << letterCount[i] << " ";
        }*/

        return res;
    }
};

int main() {
    Solution solution;

    string s = "abbac";
    int ans = solution.longestBalanced(s);

    cout << ans << endl;
    return 0;
}