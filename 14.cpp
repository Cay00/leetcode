#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];

        for (string str : strs) {
            while (str.find(res) != 0) {
                res = res.substr(0, res.length() - 1);
			}
        }
		
		return res;
    }
};

int main() {
    Solution solution;

    vector<string> strs = { "flower","flow","flight" };
    string ans = solution.longestCommonPrefix(strs);
    
    cout << ans << endl;

    return 0;
}