#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int res = 0;
        int x = strs[0].size();
        for (int i = 0; i < x; i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] < strs[j - 1][i]) {
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};

int main() {
    Solution solution;

    return 0;
}