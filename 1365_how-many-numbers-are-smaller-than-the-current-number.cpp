#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);
        vector<int> res = {};
        
        for (int num : nums) {
            count[num]++;
        }

        for (int i = 1; i < 101; i++) {
            count[i] += count[i - 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (x == 0) res.push_back(0);
            else res.push_back(count[x-1]);
        }

        return res;
    }
};

int main() {
    Solution solution;

    vector<int> nums = { 8,1,2,2,3 };
    vector<int> ans = solution.smallerNumbersThanCurrent(nums);

    for (int num : ans) cout << num << endl;

    return 0;
}