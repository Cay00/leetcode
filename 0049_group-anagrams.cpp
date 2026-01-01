#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> sorted_strs = strs;
        unordered_map<string, vector<string>> groups;

        vector<vector<string>> res;

        for (int i = 0; i < strs.size(); i++) {
            sort(sorted_strs[i].begin(), sorted_strs[i].end());
            groups[sorted_strs[i]].push_back(strs[i]);
        }

        for (auto& group : groups) {
            res.push_back(group.second);
        }

        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}