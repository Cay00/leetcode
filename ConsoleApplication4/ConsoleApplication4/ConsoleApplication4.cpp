#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int res = 0;
        string last;


        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.length(); j++) {
                string subs = s.substr(i, j - i + 1);
                vector<int> letterCount(26, 0);

                for (char c : subs) {
                    letterCount[c - 'a']++;
                }

                int max = 0;
                int r = 1;

                for (int count : letterCount) {
                    if (count > 0) {
						cout << count << " ";
                    }
				}
            }
        }

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